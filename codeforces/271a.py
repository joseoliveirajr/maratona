import sys
 
sy = input()
iy = int(sy)
 
iy += 1
sy = str(iy)
 
d = [False] * 10
 
while True: 
    find = True
    for i in range(len(sy)):
        if d[int(sy[i])] is False:
            d[int(sy[i])] = True
        else:
            find = False
            iy += 1
            sy = str(iy)
            d = [False] * 10
            break;
    if find:
        print(sy)
        sys.exit(0)