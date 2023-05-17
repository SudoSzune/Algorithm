import sys
input = sys.stdin.readline

n = int(input())
delay_time = list(map(int, input().split()))
delay_time.sort()
minoftime = 0

for i in range(1,n+1):
    minoftime += sum(delay_time[0:i])
print(minoftime)