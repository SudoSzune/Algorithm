import sys

input = sys.stdin.readline

N = int(input())

list = []

for i in range(N):
    s = input().rstrip('\n')
    if s in list:
        continue
    else:
        list.append(s)

list.sort()
list.sort(key=lambda p: len(p))

for i in range(len(list)):
    print(list[i])