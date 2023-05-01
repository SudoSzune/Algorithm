#sys.stdin.readline으로 받아오니까 개행문자까지 같이 처리되서 그냥 input으로 받음
s = input()
queue = []
for i in range(0,len(s),1):
    queue.append(s[i::])

queue.sort()

for i in range(len(queue)):
    print(queue[i])
    
