import sys
input = sys.stdin.readline

x = int(input())

arr1 = list(map(int, input().split()))

arr1.reverse()

#arr1에 있는 원소를 인덱스로 받아서 7 ~ 1까지 새로운 리스트에 대입
arr2 = []
for i in range(x,0,-1):
    a = arr1[x-i]
    arr2.insert(a,i)

print(*arr2)