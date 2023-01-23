trays=["Tray 1","Tray 2","Tray 3","Tray 4","Tray 5","Tray 6"]
def addNewKTray(topLabel, tray1, slot1, tray1Menu, slot1Menu,tray2, slot2, tray2Menu, slot2Menu,tray3, slot3, tray3Menu, slot3Menu,tray4, slot4, tray4Menu, slot4Menu,tray5, slot5, tray5Menu, slot5Menu,tray6, slot6, tray6Menu, slot6Menu, counter, availableTrays, availableSlots):
    if len(counter)==0:
        tray1.set(availableTrays[0])
        slot1.set(availableSlots[0])
        availableTrays.remove(tray1.get())
        availableSlots.remove(slot1.get())
        tray1Menu.pack(after=topLabel)
        slot1Menu.pack(after=tray1Menu)
    elif len(counter)==1:
        tray2.set(availableTrays[0])
        slot2.set(availableSlots[0])
        availableTrays.remove(tray2.get())
        availableSlots.remove(slot2.get())
        tray2Menu.pack(after=slot1Menu)
        slot2Menu.pack(after=tray2Menu)
    elif len(counter)==2:
        tray3.set(availableTrays[0])
        slot3.set(availableSlots[0])
        availableTrays.remove(tray3.get())
        availableSlots.remove(slot3.get())
        tray3Menu.pack(after=slot2Menu)
        slot3Menu.pack(after=tray3Menu)
    elif len(counter)==3:
        tray4.set(availableTrays[0])
        slot4.set(availableSlots[0])
        availableTrays.remove(tray4.get())
        availableSlots.remove(slot4.get())
        tray4Menu.pack(after=slot3Menu)
        slot4Menu.pack(after=tray4Menu)
    elif len(counter)==4:
        tray5.set(availableTrays[0])
        slot5.set(availableSlots[0])
        availableTrays.remove(tray5.get())
        availableSlots.remove(slot5.get())
        tray5Menu.pack(after=slot4Menu)
        slot5Menu.pack(after=tray5Menu)
    elif len(counter)==5:
        tray6.set(availableTrays[0])
        slot6.set(availableSlots[0])
        availableTrays.remove(tray6.get())
        availableSlots.remove(slot6.get())
        tray6Menu.pack(after=slot6Menu)
        slot6Menu.pack(after=tray6Menu)
    counter.append(0)
    availableTrays.remove(availableTrays[0])
    availableSlots.remove(availableSlots[0])

def removeKTray(topLabel, tray1, slot1, tray1Menu, slot1Menu,tray2, slot2, tray2Menu, slot2Menu,tray3, slot3, tray3Menu, slot3Menu,tray4, slot4, tray4Menu, slot4Menu,tray5, slot5, tray5Menu, slot5Menu,tray6, slot6, tray6Menu, slot6Menu, counter, availableTrays, availableSlots):
    if len(counter)==0:
        availableTrays.append(tray1.get())
        availableSlots.append(slot1.get())
        tray1.set("")
        slot1.set("")
        tray1Menu.pack_forget()
        slot1Menu.pack_forget()
    elif len(counter)==1:
        availableTrays.append(tray2.get())
        availableSlots.append(slot2.get())
        tray2.set("")
        slot2.set("")
        tray2Menu.pack_forget()
        slot2Menu.pack_forget()
    elif len(counter)==2:
        availableTrays.append(tray3.get())
        availableSlots.append(slot3.get())
        tray3.set("")
        slot3.set("")
        tray3Menu.pack_forget()
        slot3Menu.pack_forget()
    elif len(counter)==3:
        availableTrays.append(tray4.get())
        availableSlots.append(slot4.get())
        tray4.set("")
        slot4.set("")
        tray4Menu.pack_forget()
        slot4Menu.pack_forget()
    elif len(counter)==4:
        availableTrays.append(tray5.get())
        availableSlots.append(slot5.get())
        tray5.set("")
        slot5.set("")
        tray5Menu.pack_forget()
        slot5Menu.pack_forget()
    elif len(counter)==5:
        availableTrays.append(tray6.get())
        availableSlots.append(slot6.get())
        tray6.set("")
        slot6.set("")
        tray6Menu.pack_forget()
        slot6Menu.pack_forget()
    availableSlots.sort()
    counter.remove(0)

def updateKTrayMenus(tray1, tray1Menu, tray2, tray2Menu, tray3, tray3Menu, tray4, tray4Menu, tray5, tray5Menu, tray6, tray6Menu,a,b,c):
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
            menu1.add_command(label=id, command=lambda id=id: tray1.set(id))
        if (tray not in currentTrayVals) or tray==tray2.get():
            menu2.add_command(label=id, command=lambda id=id: tray2.set(id))
        if (tray not in currentTrayVals) or tray==tray3.get():
            menu3.add_command(label=id, command=lambda id=id: tray3.set(id))
        if (tray not in currentTrayVals) or tray==tray4.get():
            menu4.add_command(label=id, command=lambda id=id: tray4.set(id))
        if (tray not in currentTrayVals) or tray==tray5.get():
            menu5.add_command(label=id, command=lambda id=id: tray5.set(id))
        if (tray not in currentTrayVals) or tray==tray6.get():
            menu6.add_command(label=id, command=lambda id=id: tray6.set(id))
    