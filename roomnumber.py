num = [0] * 10
roomnumber = input()

for i in range(len(roomnumber)):
    numinroomnum = int(roomnumber[i])
    if numinroomnum == 6 or numinroomnum == 9:
        num[6] += 1
    else:
        num[numinroomnum] += 1

num[6] = int(num[6]/2) + int(num[6]%2)

print(max(num))



    
