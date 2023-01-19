def getPartName(val):
    '''returns the part name from the given id. ids are from ariac ros2 msgs'''
    if val==10:
        partName = "battery"
    elif val==11:
        partName = "pump"
    elif val==12:
        partName = "sensor"
    else:
        partName = "regulator"
    return partName

def getPartColor(val):
    '''returns the part color from the given id. ids are from ariac ros2 msgs'''
    if val==1:
        partColor="red"
    elif val==2:
        partColor="green"
    elif val==3:
        partColor="blue"
    elif val==4:
        partColor="orange"
    else:
        partColor="purple"
    return partColor