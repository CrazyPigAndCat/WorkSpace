#from typing import Sized


intArr = [-40380,-14850,4457,7,-2845,-91,-62041,185,3,9];

intI = 0
intJ = 0
while intI < len(intArr):
    while intJ < len(intArr) - intI - 1:
        if(intArr[intJ] > intArr[intJ + 1]):
            intTemp = intArr[intJ]
            intArr[intJ] = intArr[intJ + 1]
            intArr[intJ + 1] = intTemp
        intJ += 1
    intI += 1
    intJ = 0 
print(intArr)
