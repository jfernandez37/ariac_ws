import tkinter as tk
import platform
from datetime import datetime
from os import chdir
from functools import partial
from PIL import Image, ImageTk  # needed for images in gui
from ariac_gui.checkCancel import *
from ariac_gui.updateRanges import *
from ariac_gui.validationFunc import *
from ariac_gui.fileFunc import *
from ariac_gui.buttonFuncs import *
from ariac_gui.timeFunctions import *
from ariac_gui.addPartFunc import *
from ariac_gui.newClasses import *
from ariac_gui.addNewBin import *
from ariac_gui.orderFuncs import *
from ariac_gui.challengesFuncs import *
from ariac_gui.msgNames import *
from ariac_gui.kittingTrayFunctions import *
from ariac_msgs.msg import *

def runGUI():
    CHECKBOXHEIGHT=1
    pathIncrement = []  # gives the full path for recursive deletion
    createdDir = []  # to deleted directories made if canceled
    leftColumn=1
    middleColumn=2 
    middleColumnWidth=62  # width of middle margin for live yaml windows
    rightColumn=3
    nameLabels = []  # holds temporary flags to be deleted
    agv1Parts=[]
    agv2Parts=[]
    agv3Parts=[]
    agv4Parts=[]
    agv1Quadrants=["1","2","3","4"] # available quadrants for agv1
    agv2Quadrants=["1","2","3","4"] # available quadrants for agv2
    agv3Quadrants=["1","2","3","4"] # available quadrants for agv3
    agv4Quadrants=["1","2","3","4"] # available quadrants for agv4
    bins=[] # holds the bins
    bin1Slots=[] # holds the available slots for bin1
    bin2Slots=[] # holds the available slots for bin2
    bin3Slots=[] # holds the available slots for bin3
    bin4Slots=[] # holds the available slots for bin4
    bin5Slots=[] # holds the available slots for bin5
    bin6Slots=[] # holds the available slots for bin6
    bin7Slots=[] # holds the available slots for bin7
    bin8Slots=[] # holds the available slots for bin8
    convParts=[] # holds conveyor belt parts
    convOrders=["random", "sequential"]
    for i in range(9):
        bin1Slots.append(str(i+1))
        bin2Slots.append(str(i+1))
        bin3Slots.append(str(i+1))
        bin4Slots.append(str(i+1))
        bin5Slots.append(str(i+1))
        bin6Slots.append(str(i+1))
        bin7Slots.append(str(i+1))
        bin8Slots.append(str(i+1))
    allOrders=[] # holds all orders
    orderCounter=[] # for counting the number of orders
    orderMSGS=[] # holds all order ros2 messages
    allOrderChallenges=[] # for holding challenges in the orders section
    kittingTrayIds=[] # holds the selected kitting tray ids
    kittingTraySlots=[] # holds the selected kitting tray slots
    binPresentFlags=[] # to hold which bins are present 
    for i in range(8):
        binPresentFlags.append(0)
    orderKittingParts=[]# holds all kitting parts
    orderAssembParts=[] # holds all assembly parts
    usedIDs=[] # holds the ids that have already been used to avoid repeated ids
    robotMalfunctions=[] # holds all robot malfunctions
    faultyParts=[] # holds all faulty parts
    droppedParts=[] # holds all dropped parts
    sensorBlackouts=[] # holds all sensor blackouts
    robotsToDisable=[] # holds robots to be disabled
    faultyPartQuadrants=[] # holds quadrants for dropped parts
    sensorsToDisable=[] # holds sensors for sensor blackout
    availableTrays=["Tray 0","Tray 1","Tray 2","Tray 3","Tray 4","Tray 5","Tray 6","Tray 7","Tray 8","Tray 9"]
    availableSlots=["Slot 1", "Slot 2", "Slot 3", "Slot 4", "Slot 5", "Slot 6"]
    kittingTrayCounter=[]
    # END OF DEFINITIONS
    # ----------------------------------------------------------------------------------------------
    # START OF GUI
    getFileName = tk.Tk() #window to create and get the file
    fileNameVar = tk.StringVar()
    faultySkipFlag = tk.StringVar()
    faultySkipFlag.set('0')
    dropsSkipFlag = tk.StringVar()
    dropsSkipFlag.set('0')
    sensor_blackout_skip_flag = tk.StringVar()
    sensor_blackout_skip_flag.set('0')
    secondOrderFlag = tk.StringVar()
    secondOrderFlag.set('0')
    assembProdsFlag = tk.StringVar()
    assembProdsFlag.set('0')
    kitProdsFlag = tk.StringVar()
    kitProdsFlag.set('0')
    orderFlag = tk.StringVar()
    orderFlag.set('0')
    orderNextFlag = tk.StringVar()
    orderNextFlag.set('0')
    kittingFlag = tk.StringVar()
    kittingFlag.set('0')
    assembFlag = tk.StringVar()
    assembFlag.set('0')
    frame = tk.Frame(getFileName)
    #getFileName.geometry("850x600")
    getFileName.attributes('-fullscreen', True)
    frame.pack()
    nistLogo = ImageTk.PhotoImage(Image.open("src/ariac_gui/ariac_gui/GUI_Images/new_NIST_logo.png"))
    logoImgLabel = tk.Label(frame, image=nistLogo)
    logoImgLabel.pack(pady=40)
    cancelFlag = tk.StringVar()
    cancelFlag.set('0')
    getFileName.title("NIST ARIAC CONFIG GUI")
    fileName = tk.StringVar()
    fileName.set("")
    invalidFlag = tk.StringVar()
    invalidFlag.set('0')
    reqFlag = tk.StringVar()
    reqFlag.set("0")
    existFlag = tk.StringVar()
    existFlag.set("0")
    fileNameCorrectFunc = partial(correct_file_name, fileName)
    saveAndExit = partial(make_file, getFileName, fileNameVar)
    openFileExp = tk.Button(getFileName, text="Create file", command=saveAndExit)
    openFileExp.pack()
    cancel_file = partial(cancel_wind, getFileName, cancelFlag)
    cancelFile = tk.Button(getFileName, text="Cancel and Exit", command=cancel_file)
    cancelFile.pack(side=tk.BOTTOM, pady=20)
    fileFunc=partial(get_file_name_next, fileName, invalidFlag, nameLabels, getFileName, reqFlag, existFlag)
    fileExit = tk.Button(getFileName, text="Next", command=fileFunc)
    fileExit.pack(side=tk.BOTTOM, pady=20)
    fileName.trace('w', fileNameCorrectFunc)
    getFileName.mainloop()
    if cancelFlag.get()=='1':
        quit()
    tempFilePath=''
    if platform.system()=="Windows": # gets the file name of the file just created
        brokenPath=fileNameVar.get().split("\\")
        for i in brokenPath[:-1]:
            tempFilePath+=i+"\\"
        fileNameStr=brokenPath[len(brokenPath)-1]
        chdir(tempFilePath)
        saveFileName=fileNameStr
    else:
        brokenPath=fileNameVar.get().split("/")
        for i in brokenPath[:-1]:
            tempFilePath+=i+"/"
        fileNameStr=brokenPath[len(brokenPath)-1]
        chdir(tempFilePath)
        saveFileName=fileNameStr
    fileName.set(saveFileName)
    # END OF GETTING THE NAME OF THE FILE
    # ----------------------------------------------------------------------------------------------
    # START OF GETTING TIME LIMIT
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
    # END OF TIME LIMIT
    # ----------------------------------------------------------------------------------------------
    # START OF GETTING KITTING TRAYS
    kittingTrayWind=tk.Tk()
    kittingTrayWind.attributes('-fullscreen', True)
    kittingTrayLabel=tk.Label(kittingTrayWind, text="Kitting Trays")
    kittingTrayLabel.grid(column=2, row=1)
    tray1=tk.StringVar()
    tray2=tk.StringVar()
    tray3=tk.StringVar()
    tray4=tk.StringVar()
    tray5=tk.StringVar()
    tray6=tk.StringVar()
    slot1=tk.StringVar()
    slot2=tk.StringVar()
    slot3=tk.StringVar()
    slot4=tk.StringVar()
    slot5=tk.StringVar()
    slot6=tk.StringVar()
    tray1Menu=tk.OptionMenu(kittingTrayWind, tray1, *availableTrays)
    tray2Menu=tk.OptionMenu(kittingTrayWind, tray2, *availableTrays)
    tray3Menu=tk.OptionMenu(kittingTrayWind, tray3, *availableTrays)
    tray4Menu=tk.OptionMenu(kittingTrayWind, tray4, *availableTrays)
    tray5Menu=tk.OptionMenu(kittingTrayWind, tray5, *availableTrays)
    tray6Menu=tk.OptionMenu(kittingTrayWind, tray6, *availableTrays)
    slot1Menu=tk.OptionMenu(kittingTrayWind, slot1, *availableSlots)
    slot2Menu=tk.OptionMenu(kittingTrayWind, slot2, *availableSlots)
    slot3Menu=tk.OptionMenu(kittingTrayWind, slot3, *availableSlots)
    slot4Menu=tk.OptionMenu(kittingTrayWind, slot4, *availableSlots)
    slot5Menu=tk.OptionMenu(kittingTrayWind, slot5, *availableSlots)
    slot6Menu=tk.OptionMenu(kittingTrayWind, slot6, *availableSlots)
    #add new and remove buttons
    addNewKTray(kittingTrayLabel, tray1, slot1, tray1Menu, slot1Menu,tray2, slot2, tray2Menu, slot2Menu,tray3, slot3, tray3Menu, slot3Menu,tray4, slot4, tray4Menu, slot4Menu,tray5, slot5, tray5Menu, slot5Menu,tray6, slot6, tray6Menu, slot6Menu, kittingTrayCounter, availableTrays, availableSlots)
    add_new_tray=partial(addNewKTray,kittingTrayLabel, tray1, slot1, tray1Menu, slot1Menu,tray2, slot2, tray2Menu, slot2Menu,tray3, slot3, tray3Menu, slot3Menu,tray4, slot4, tray4Menu, slot4Menu,tray5, slot5, tray5Menu, slot5Menu,tray6, slot6, tray6Menu, slot6Menu, kittingTrayCounter, availableTrays, availableSlots)
    addTrayButton=tk.Button(kittingTrayWind, text="Add New Tray", command=add_new_tray)
    addTrayButton.grid(column=MIDDLECOLUMN, row=8)
    remove_tray=partial(removeKTray,tray1, slot1, tray1Menu, slot1Menu,tray2, slot2, tray2Menu, slot2Menu,tray3, slot3, tray3Menu, slot3Menu,tray4, slot4, tray4Menu, slot4Menu,tray5, slot5, tray5Menu, slot5Menu,tray6, slot6, tray6Menu, slot6Menu, kittingTrayCounter, availableTrays, availableSlots)
    removeTrayButton=tk.Button(kittingTrayWind, text="Remove Tray", command=remove_tray)
    removeTrayButton.grid(column=MIDDLECOLUMN, row=9)
    #save and cancel buttons
    saveTrayButton=tk.Button(kittingTrayWind, text="Save and Continue", command=kittingTrayWind.destroy)
    saveTrayButton.grid(column=MIDDLECOLUMN, row=10)
    cancel_tray_command=partial(cancel_wind, kittingTrayWind, cancelFlag)
    cancelTrayButton=tk.Button(kittingTrayWind, text="Cancel and Exit", command=cancel_tray_command)
    cancelTrayButton.grid(column=MIDDLECOLUMN, row=11)
    #trace functions
    update_all_tray_menus=partial(updateKTrayMenus,tray1, tray1Menu, tray2, tray2Menu, tray3, tray3Menu, tray4, tray4Menu, tray5, tray5Menu, tray6, tray6Menu,kittingTrayCounter,removeTrayButton, addTrayButton, saveTrayButton)
    update_all_slot_menus=partial(updateKSlotMenus, slot1, slot1Menu, slot2, slot2Menu, slot3, slot3Menu, slot4, slot4Menu, slot5, slot5Menu, slot6, slot6Menu)
    tray1.trace('w', update_all_tray_menus)
    tray2.trace('w', update_all_tray_menus)
    tray3.trace('w', update_all_tray_menus)
    tray4.trace('w', update_all_tray_menus)
    tray5.trace('w', update_all_tray_menus)
    tray6.trace('w', update_all_tray_menus)
    slot1.trace('w', update_all_slot_menus)
    slot2.trace('w', update_all_slot_menus)
    slot3.trace('w', update_all_slot_menus)
    slot4.trace('w', update_all_slot_menus)
    slot5.trace('w', update_all_slot_menus)
    slot6.trace('w', update_all_slot_menus)
    saveFlag=tk.StringVar()
    saveFlag.set('0')
    saveOrdersFlag=tk.StringVar()
    saveOrdersFlag.set('0')
    kittingTrayWind.mainloop()
    check_cancel(cancelFlag.get(), pathIncrement, fileName, createdDir)
    # END OF GETTING KITTING TRAYS
    # ----------------------------------------------------------------------------------------------
    # START OF PARTS
    #parts variables
    agv1TrayIdVal=agvTrayIds[0]
    agv2TrayIdVal=agvTrayIds[0]
    agv3TrayIdVal=agvTrayIds[0]
    agv4TrayIdVal=agvTrayIds[0]
    convActiveVal='0'
    spawnRateVal='0'
    convOrderVal='random'
    while(saveFlag.get()=="0"): #Runs until the user saves and exits or quits
        agv1TrayIdVal, agv2TrayIdVal, agv3TrayIdVal, agv4TrayIdVal, convActiveVal, spawnRateVal, convOrderVal=addPart(agv1TrayIdVal, agv2TrayIdVal, agv3TrayIdVal, agv4TrayIdVal, agv1Parts, agv2Parts, agv3Parts, agv4Parts, 
        agv1Quadrants, agv2Quadrants, agv3Quadrants, agv4Quadrants,bins,
        bin1Slots,bin2Slots,bin3Slots,bin4Slots,bin5Slots,bin6Slots,bin7Slots,bin8Slots, 
        spawnRateVal,convActiveVal,convParts, cancelFlag, pathIncrement,fileName,createdDir, convOrderVal,saveFlag)
    # END OF CONVEYOR BELT
    # ----------------------------------------------------------------------------------------------
    # START OF ORDERS
    while (saveOrdersFlag.get()=="0"):
        runOrdersWind(orderMSGS, allOrders, orderCounter, allOrderChallenges, orderKittingParts, orderAssembParts, usedIDs, cancelFlag, pathIncrement, fileName, createdDir, saveOrdersFlag)
    # END OF ORDERS
    # ----------------------------------------------------------------------------------------------
    #START OF CHALLENGES
    challengeWind=tk.Tk()
    challengeWind.title("Challenges")
    #challengeWind.geometry("850x600")
    challengeWind.attributes('-fullscreen', True)
    #robot malfunciton
    new_robot_malfunction=partial(newRobotMalfunction, robotMalfunctions, usedIDs)
    robotMalfunctionButton=tk.Button(challengeWind, text="Add robot malfunction", command=new_robot_malfunction)
    robotMalfunctionButton.pack(pady=10)
    #faluty part
    new_faulty_part=partial(newFaultyPart, faultyParts, usedIDs)
    faultyPartButton=tk.Button(challengeWind, text="Add faulty part", command=new_faulty_part)
    faultyPartButton.pack(pady=10)
    #dropped part
    new_dropped_part=partial(newDroppedPart, droppedParts)
    droppedPartButton=tk.Button(challengeWind, text="Add dropped part", command=new_dropped_part)
    droppedPartButton.pack(pady=10)
    #sensor blackout
    new_sensor_blackout=partial(newSensorBlackout, sensorBlackouts, usedIDs)
    sensorBlackoutButton=tk.Button(challengeWind, text="Add sensor blackout", command=new_sensor_blackout)
    sensorBlackoutButton.pack(pady=10)
    #save and cancel buttons
    saveChallengeButton=tk.Button(challengeWind, text="Save and Continue", command=challengeWind.destroy)
    saveChallengeButton.pack(pady=20)
    cancel_challenge_command=partial(cancel_wind, challengeWind, cancelFlag)
    cancelChallengeButton=tk.Button(challengeWind, text="Cancel and Exit", command=cancel_challenge_command)
    cancelChallengeButton.pack(pady=20)
    challengeWind.mainloop()
    check_cancel(cancelFlag.get(), pathIncrement, fileName, createdDir)
    #Finds which bins are present
    for i in bins:
        if i.binName=="bin1":
            binPresentFlags[0]=1
        if i.binName=="bin2":
            binPresentFlags[1]=1
        if i.binName=="bin3":
            binPresentFlags[2]=1
        if i.binName=="bin4":
            binPresentFlags[3]=1
        if i.binName=="bin5":
            binPresentFlags[4]=1
        if i.binName=="bin6":
            binPresentFlags[5]=1
        if i.binName=="bin7":
            binPresentFlags[6]=1
        if i.binName=="bin8":
            binPresentFlags[7]=1    
    KTraysSTR=tray1.get()+tray2.get()+tray3.get()+tray4.get()+tray5.get()+tray6.get()
    chosenKTrays=[]
    for i in KTraysSTR:
        if i.isnumeric():
            chosenKTrays.append(i)
    KSlotsSTR=slot1.get()+slot2.get()+slot3.get()+slot4.get()+slot5.get()+slot6.get()
    chosenKSlots=[]
    for i in KSlotsSTR:
        if i.isnumeric():
            chosenKSlots.append(i)
    #  WRITE TO FILE
    tempStr=''
    with open(saveFileName, "a") as o:
        o.write("# Trial Name: "+saveFileName+"\n")
        o.write("# ARIAC2023\n")
        o.write("# "+datetime.now().strftime("%Y-%m-%d %H:%M:%S")+"\n\n") #writes the time and date
        o.write("# ENVIRONMENT SETUP\n") 
        if noTimeVal.get()=="1": # runs if the user selects no time limit
            o.write("time_limit: -1")
        else: #writes the time limit
            o.write("time_limit: "+timeVal.get())
        o.write(" # options: -1 (no time limit) or number of seconds\n")
        o.write("\nkitting_trays: # Which kitting trays will be spawned\n")
        o.write("  tray_ids: ["+", ".join(chosenKTrays)+"]\n")
        o.write("  slots: ["+", ".join(chosenKSlots)+"]\n")
        o.write("\nparts:\n")
        o.write("  agvs:\n")
    if len(agv1Parts)>0:
        writePartsToFile("agv1", agv1TrayIdVal, agv1Parts, saveFileName)
    if len(agv2Parts)>0:
        writePartsToFile("agv2", agv2TrayIdVal, agv2Parts, saveFileName)
    if len(agv3Parts)>0:
        writePartsToFile("agv3", agv3TrayIdVal, agv3Parts, saveFileName)
    if len(agv4Parts)>0:
        writePartsToFile("agv4", agv4TrayIdVal, agv4Parts, saveFileName)
    with open(saveFileName, "a") as o:
        o.write("\n  bins: # bin params - 8 total bins each bin has nine total slots (1-9)\n")
    if binPresentFlags[0]==1:
        writeBinsToFile("bin1", bins, saveFileName)
    if binPresentFlags[1]==1:
        writeBinsToFile("bin2", bins, saveFileName)
    if binPresentFlags[2]==1:
        writeBinsToFile("bin3", bins, saveFileName)
    if binPresentFlags[3]==1:
        writeBinsToFile("bin4", bins, saveFileName)
    if binPresentFlags[4]==1:
        writeBinsToFile("bin5", bins, saveFileName)
    if binPresentFlags[5]==1:
        writeBinsToFile("bin6", bins, saveFileName)
    if binPresentFlags[6]==1:
        writeBinsToFile("bin7", bins, saveFileName)
    if binPresentFlags[7]==1:
        writeBinsToFile("bin8", bins, saveFileName)
    with open(saveFileName, "a") as o:
        o.write("\n  conveyor_belt: #population params for conveyor belt\n")
        if convActiveVal=="1":
            o.write("    active: true\n")
        else:
            o.write("    active: false\n")
        o.write("    spawn_rate: "+spawnRateVal+" # seconds between spawn\n")
        o.write("    order: "+convOrderVal+" # random or sequential\n")
        if len(convParts)>0:
            o.write("    parts_to_spawn:\n")
            for part in convParts:
                o.write("      - type: "+part.type)
                o.write("\n        color: "+part.color)
                o.write("\n        number: "+part.number)
                o.write("\n        offset: "+part.offset+" # between -1 and 1")
                o.write("\n        rotation: "+ part.rotation)
                o.write("\n        # time_before_next_part: 2 # seconds\n")
        
        #Beginning of order writing to file
        o.write("\n# ORDER SETUP\n")
        o.write("orders:\n")
        for order in orderMSGS:
            o.write("    id: \'"+order.id+"\'\n")
            o.write("    type: \'"+getOrderType(order.type)+"\'\n")
            o.write("    priority: " + str(order.priority).lower()+"\n")
            if order.type==0:
                o.write("    kitting_task:\n")
                o.write("      agv: "+str(order.kitting_task.agv_number)+"\n")
                o.write("      tray_id: "+str(order.kitting_task.tray_id)+"\n")
                o.write("      destination: \'"+getKittingDestName(order.kitting_task.destination)+"\'\n")
                o.write("      products:\n")
                for kittingPart in order.kitting_task.parts:
                    o.write("        - type: \'"+getPartName(kittingPart.part.type)+"\'\n")
                    o.write("          color: \'"+getPartColor(kittingPart.part.color)+"\'\n")
                    o.write("          quadrant: "+str(kittingPart.quadrant)+"\n")
            elif order.type==1:
                o.write("    assembly_task:\n")
                o.write("      agv: ["+", ".join(str(agvNum) for agvNum in order.assembly_task.agv_numbers)+"]\n")
                o.write("      station: \'as"+str(order.assembly_task.station)+"\'\n")
                o.write("      products:\n")
                for assemblyPart in order.assembly_task.parts:
                    o.write("        - type: \'"+getPartName(assemblyPart.part.type)+"\'\n")
                    o.write("          color: \'"+getPartColor(assemblyPart.part.color)+"\'\n")
                    o.write("          assembled_pose: # relative to briefcase frame\n")
                    o.write("            xyz: FIXED\n")
                    o.write("            rpy: FIXED\n")
                    o.write("          assembly_direction: ["+str(assemblyPart.install_direction.x)+", "+str(assemblyPart.install_direction.y)+", "+str(assemblyPart.install_direction.z)+"]\n")
            else:
                o.write("    combined_task:\n")
                o.write("      station: \'as"+str(order.combined_task.station)+"\'\n")
                o.write('      products:\n')
                for combinedPart in order.combined_task.parts:
                    o.write("        - type: \'"+getPartName(combinedPart.part.type)+"\'\n")
                    o.write("          color: \'"+getPartColor(combinedPart.part.color)+"\'\n")
                    '''o.write("          assembled_pose: # relative to briefcase frame\n")
                    o.write("            xyz: "+prod.xyz+"\n")
                    o.write("            rpy: "+prod.rpy+"\n")'''
                    o.write("          assembly_direction: ["+str(combinedPart.install_direction.x)+", "+str(combinedPart.install_direction.y)+", "+str(combinedPart.install_direction.z)+"]\n")
        #end of order writing to file
        
        #writes orders to file
        o.write("\n# GLOBAL CHALLENGES\n")
        o.write("challenges:\n")
        #robot malfunctions
        for malf in robotMalfunctions:
            o.write("  - robot_malfunction:\n")
            o.write("      duration: "+str(malf.duration)+"\n")
            robotsToDisable=[]
            if malf.robots_to_disable.floor_robot:
                robotsToDisable.append("\'floor_robot\'")
            if malf.robots_to_disable.ceiling_robot:
                robotsToDisable.append("\'ceiling_robot\'")
            o.write("      robots_to_disable: ["+", ".join(robotsToDisable)+"]\n")
            if malf.condition.type==0:
                o.write("      time: "+str(malf.condition.time_condition.seconds)+"\n")
            elif malf.condition.type==1:
                o.write("      part_type: \'"+getPartName(malf.condition.part_place_condition.part.type)+"\'\n")
                o.write("      part_color: \'"+getPartColor(malf.condition.part_place_condition.part.color)+"\'\n")
                o.write("      agv: "+str(malf.condition.part_place_condition.agv))
            elif malf.condition.type==2:
                o.write("      order_id: \'"+malf.condition.submission_condition.order_id+"\'\n")
        #faulty parts
        for part in faultyParts:
            o.write("  - faulty_part:\n")
            o.write("      order_id: \'"+part.order_id+"\'\n")
            faultyPartQuadrants=[]
            if part.quadrant1:
                faultyPartQuadrants.append("1")
            if part.quadrant2:
                faultyPartQuadrants.append("2")
            if part.quadrant3:
                faultyPartQuadrants.append("3")
            if part.quadrant4:
                faultyPartQuadrants.append("4")
            o.write("      quadrant: ["+", ".join(faultyPartQuadrants)+"]\n")
        #dropped parts
        for part in droppedParts:
            o.write("  - dropped_part:\n")
            o.write("      robot: \'"+part.robot+"\'\n")
            o.write("      type: \'"+getPartName(part.part_to_drop.type)+"\'\n")
            o.write("      color: \'"+getPartColor(part.part_to_drop.color)+"\'\n")
            o.write("      drop_after_num: "+str(part.drop_after_num)+" # first part the robot successfully picks\n")
            o.write("      drop_after_time: "+str(part.drop_after_time)+" # secons\n")
        #sensor blackouts
        for blackout in sensorBlackouts:
            o.write("  - sensor_blackout:\n")
            o.write("    duration: "+str(blackout.duration)+"\n")
            #gets the list of sensors to disable
            if blackout.sensors_to_disable.break_beam:
                sensorsToDisable.append("break_beam")
            if blackout.sensors_to_disable.proximity:
                sensorsToDisable.append("proximity")
            if blackout.sensors_to_disable.laser_profiler:
                sensorsToDisable.append("laser_profiler")
            if blackout.sensors_to_disable.lidar:
                sensorsToDisable.append("lidar")
            if blackout.sensors_to_disable.camera:
                sensorsToDisable.append("camera")
            if blackout.sensors_to_disable.logical_camera:
                sensorsToDisable.append("logical_camera")
            o.write("    sensors_to_disable: ["+", ".join(sensorsToDisable)+"]\n")
            if blackout.condition.type==0:
                o.write("      time: "+str(blackout.condition.time_condition.seconds)+"\n")
            elif blackout.condition.type==1:
                o.write("      part_type: \'"+getPartName(blackout.condition.part_place_condition.part.type)+"\'\n")
                o.write("      part_color: \'"+getPartColor(blackout.condition.part_place_condition.part.color)+"\'\n")
                o.write("      agv: "+str(blackout.condition.part_place_condition.agv))
            elif blackout.condition.type==2:
                o.write("      order_id: \'"+blackout.condition.submission_condition.order_id+"\'\n")