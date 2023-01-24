trays=["Tray 0","Tray 1","Tray 2","Tray 3","Tray 4","Tray 5","Tray 6","Tray 7","Tray 8","Tray 9"]
slots=["Slot 1", "Slot 2", "Slot 3", "Slot 4", "Slot 5", "Slot 6"]
LEFTCOLUMN=1
MIDDLECOLUMN=2
RIGHTCOLUMN=3
def addNewKTray(topLabel, tray1, slot1, tray1Menu, slot1Menu,tray2, slot2, tray2Menu, slot2Menu,tray3, slot3, tray3Menu, slot3Menu,tray4, slot4, tray4Menu, slot4Menu,tray5, slot5, tray5Menu, slot5Menu,tray6, slot6, tray6Menu, slot6Menu, counter, availableTrays, availableSlots):
    if len(counter)==0:
        tray1.set(availableTrays[0])
        slot1.set(availableSlots[0])
        availableTrays.remove(tray1.get())
        availableSlots.remove(slot1.get())
        tray1Menu.grid(column=LEFTCOLUMN, row=2)
        slot1Menu.grid(column=RIGHTCOLUMN, row=2)
    elif len(counter)==1:
        tray2.set(availableTrays[0])
        slot2.set(availableSlots[0])
        availableTrays.remove(tray2.get())
        availableSlots.remove(slot2.get())
        tray2Menu.grid(column=LEFTCOLUMN, row=3)
        slot2Menu.grid(column=RIGHTCOLUMN, row=3)
    elif len(counter)==2:
        tray3.set(availableTrays[0])
        slot3.set(availableSlots[0])
        availableTrays.remove(tray3.get())
        availableSlots.remove(slot3.get())
        tray3Menu.grid(column=LEFTCOLUMN, row=4)
        slot3Menu.grid(column=RIGHTCOLUMN, row=4)
    elif len(counter)==3:
        tray4.set(availableTrays[0])
        slot4.set(availableSlots[0])
        availableTrays.remove(tray4.get())
        availableSlots.remove(slot4.get())
        tray4Menu.grid(column=LEFTCOLUMN, row=5)
        slot4Menu.grid(column=RIGHTCOLUMN, row=5)
    elif len(counter)==4:
        tray5.set(availableTrays[0])
        slot5.set(availableSlots[0])
        availableTrays.remove(tray5.get())
        availableSlots.remove(slot5.get())
        tray5Menu.grid(column=LEFTCOLUMN, row=6)
        slot5Menu.grid(column=RIGHTCOLUMN, row=6)
    elif len(counter)==5:
        tray6.set(availableTrays[0])
        slot6.set(availableSlots[0])
        availableTrays.remove(tray6.get())
        availableSlots.remove(slot6.get())
        tray6Menu.grid(column=LEFTCOLUMN, row=7)
        slot6Menu.grid(column=RIGHTCOLUMN, row=7)
    counter.append(0)

def removeKTray(tray1, slot1, tray1Menu, slot1Menu,tray2, slot2, tray2Menu, slot2Menu,tray3, slot3, tray3Menu, slot3Menu,tray4, slot4, tray4Menu, slot4Menu,tray5, slot5, tray5Menu, slot5Menu,tray6, slot6, tray6Menu, slot6Menu, counter, availableTrays, availableSlots):
    if len(counter)==1:
        availableTrays.append(tray1.get())
        availableSlots.append(slot1.get())
        tray1.set("")
        slot1.set("")
        tray1Menu.grid_forget()
        slot1Menu.grid_forget()
    elif len(counter)==2:
        availableTrays.append(tray2.get())
        availableSlots.append(slot2.get())
        tray2.set("")
        slot2.set("")
        tray2Menu.grid_forget()
        slot2Menu.grid_forget()
    elif len(counter)==3:
        availableTrays.append(tray3.get())
        availableSlots.append(slot3.get())
        tray3.set("")
        slot3.set("")
        tray3Menu.grid_forget()
        slot3Menu.grid_forget()
    elif len(counter)==4:
        availableTrays.append(tray4.get())
        availableSlots.append(slot4.get())
        tray4.set("")
        slot4.set("")
        tray4Menu.grid_forget()
        slot4Menu.grid_forget()
    elif len(counter)==5:
        availableTrays.append(tray5.get())
        availableSlots.append(slot5.get())
        tray5.set("")
        slot5.set("")
        tray5Menu.grid_forget()
        slot5Menu.grid_forget()
    elif len(counter)==6:
        availableTrays.append(tray6.get())
        availableSlots.append(slot6.get())
        tray6.set("")
        slot6.set("")
        tray6Menu.grid_forget()
        slot6Menu.grid_forget()
    availableSlots.sort()
    counter.remove(0)

def updateKTrayMenus(tray1, tray1Menu, tray2, tray2Menu, tray3, tray3Menu, tray4, tray4Menu, tray5, tray5Menu, tray6, tray6Menu,counter,removeButton, addButton, saveButton, a,b,c):
    '''Updates the available trays for kitting trays'''
    menu1=tray1Menu['menu']
    menu1.delete(0, 'end')
    menu2=tray2Menu['menu']
    menu2.delete(0, 'end')
    menu3=tray3Menu['menu']
    menu3.delete(0, 'end')
    menu4=tray4Menu['menu']
    menu4.delete(0, 'end')
    menu5=tray5Menu['menu']
    menu5.delete(0, 'end')
    menu6=tray6Menu['menu']
    menu6.delete(0, 'end')
    currentTrayVals=[tray1.get(), tray2.get(), tray3.get(), tray4.get(), tray5.get(), tray6.get()]
    for tray in trays:
        if (tray not in currentTrayVals) or tray==tray1.get():
            menu1.add_command(label=tray, command=lambda tray=tray: tray1.set(tray))
        if (tray not in currentTrayVals) or tray==tray2.get():
            menu2.add_command(label=tray, command=lambda tray=tray: tray2.set(tray))
        if (tray not in currentTrayVals) or tray==tray3.get():
            menu3.add_command(label=tray, command=lambda tray=tray: tray3.set(tray))
        if (tray not in currentTrayVals) or tray==tray4.get():
            menu4.add_command(label=tray, command=lambda tray=tray: tray4.set(tray))
        if (tray not in currentTrayVals) or tray==tray5.get():
            menu5.add_command(label=tray, command=lambda tray=tray: tray5.set(tray))
        if (tray not in currentTrayVals) or tray==tray6.get():
            menu6.add_command(label=tray, command=lambda tray=tray: tray6.set(tray))
    if len(counter)==5 and counter[0]==0:
        counter[0]=1
        addButton.grid_forget()
    else:
        addButton.grid_forget()
        addButton.grid(column=MIDDLECOLUMN, row=8)
        if len(counter)==5:
            counter[0]=0
    if len(counter)==1 and counter[0]==0:
        counter[0]=1
        removeButton.grid_forget()
    else:
        removeButton.grid_forget()
        removeButton.grid(column=MIDDLECOLUMN, row=9)
        if len(counter)==1:
            counter[0]=0
    

def updateKSlotMenus(slot1, slot1Menu, slot2, slot2Menu, slot3, slot3Menu, slot4, slot4Menu, slot5, slot5Menu, slot6, slot6Menu,a,b,c):
    '''Updates the available slots for kitting slots'''
    menu1=slot1Menu['menu']
    menu1.delete(0, 'end')
    menu2=slot2Menu['menu']
    menu2.delete(0, 'end')
    menu3=slot3Menu['menu']
    menu3.delete(0, 'end')
    menu4=slot4Menu['menu']
    menu4.delete(0, 'end')
    menu5=slot5Menu['menu']
    menu5.delete(0, 'end')
    menu6=slot6Menu['menu']
    menu6.delete(0, 'end')
    currentSlotVals=[slot1.get(), slot2.get(), slot3.get(), slot4.get(), slot5.get(), slot6.get()]
    for slot in slots:
        if (slot not in currentSlotVals) or slot==slot1.get():
            menu1.add_command(label=slot, command=lambda slot=slot: slot1.set(slot))
        if (slot not in currentSlotVals) or slot==slot2.get():
            menu2.add_command(label=slot, command=lambda slot=slot: slot2.set(slot))
        if (slot not in currentSlotVals) or slot==slot3.get():
            menu3.add_command(label=slot, command=lambda slot=slot: slot3.set(slot))
        if (slot not in currentSlotVals) or slot==slot4.get():
            menu4.add_command(label=slot, command=lambda slot=slot: slot4.set(slot))
        if (slot not in currentSlotVals) or slot==slot5.get():
            menu5.add_command(label=slot, command=lambda slot=slot: slot5.set(slot))
        if (slot not in currentSlotVals) or slot==slot6.get():
            menu6.add_command(label=slot, command=lambda slot=slot: slot6.set(slot))
    