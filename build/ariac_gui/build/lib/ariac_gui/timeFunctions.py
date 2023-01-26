import tkinter as tk
from functools import partial
from ariac_gui.checkCancel import *
acceptedNum = "0123456789"  # for requiring positive numbers for time
CHECKBOXHEIGHT=1
def updateTimeInputBox(val, box, a,b,c):
    '''disables and enables the time box if the user selects no time limit'''
    if val.get()=="1":
        box.configure(state="disabled")
    else:
        box.configure(state="normal")

def validateTime(val,a,b,c):
    '''Validates the time from the user'''
    tempStr=val.get()
    for i in tempStr:
        if i not in acceptedNum:
            tempStr=tempStr.replace(i, "")
    if tempStr!="":
        numVal=int(tempStr)
        if numVal<0:
            tempStr="0"
    val.set(tempStr)

def guiTimeWindow(cancelFlag, pathIncrement, fileName, createdDir):
    timeWind=tk.Tk()
    timeWind.title("Time limit")
    #timeWind.geometry("850x600")
    timeWind.attributes('-fullscreen', True)
    timeInstructions=tk.Label(timeWind, text="Enter the time limit you would like for the simulation")
    timeInstructions.pack(pady=100)
    timeVal=tk.StringVar()
    timeVal.set("0")
    noTimeVal=tk.StringVar()
    noTimeVal.set("0")
    noTimeLim=tk.Checkbutton(timeWind, text="No time limit", variable=noTimeVal, onvalue="1", offvalue="0", height=CHECKBOXHEIGHT, width=20)
    noTimeLim.pack()
    getTime=tk.Entry(timeWind, textvariable=timeVal)
    getTime.pack()
    saveTimeButton=tk.Button(timeWind, text="Save and Continue", command=timeWind.destroy)
    saveTimeButton.pack(pady=20)
    cancel_time_command=partial(cancel_wind, timeWind, cancelFlag)
    cancelTimeButton=tk.Button(timeWind, text="Cancel and Exit", command=cancel_time_command)
    cancelTimeButton.pack(pady=20)
    updateGetTime=partial(updateTimeInputBox, noTimeVal, getTime)
    validateTimeInput=partial(validateTime, timeVal)
    noTimeVal.trace('w', updateGetTime)
    timeVal.trace('w', validateTimeInput)
    timeWind.mainloop()
    check_cancel(cancelFlag.get(), pathIncrement, fileName, createdDir)
    return timeVal.get(), noTimeVal.get()