from collections import deque
import sys
input = sys.stdin.readline

n, m = map(int, input().split())    
pos = list(map(int, input().split()))  # 뽑아내려는 수의 위치를 입력값으로 받기
que = deque([i for i in range(1, n+1)])  # deque([1, 2, 3,...,n])

count = 0   # 2, 3번연산의 카운트 세기
for i in pos:  
    while True:     
        if que[0] == i:  #1번 연산에 대한 내용
            que.popleft()
            break
        else:
            if que.index(i) >= len(que)/2:  # 뽑아내려는 수의 인덱스가 중간값과 같거나 클때,(클때는 무조건 3번이 이득)이므로 3번 연산을 수행한다.
                while que[0] != i:   
                    que.appendleft(que.pop())  
                    count += 1
            else:   #뽑아내고자 하는 수의 인덱스가 중간값보다 작을떄, 2번 연산이 이득이므로 2번 연산 수행한다.
                while que[0] != i:
                    que.append(que.popleft())  
                    count += 1
print(count)