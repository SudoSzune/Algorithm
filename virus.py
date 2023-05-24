import sys
input = sys.stdin.readline

m = int(input())
numofedge = int(input())
matrix = [[] for i in range(m+1)]
visited = [0] * (m+1)
for i in range(numofedge):
    a,b = map(int, input().split())
    matrix[a].append(b)
    matrix[b].append(a)

cnt = 0

def dfs(v):
    visited[v] = 1 #초기 방문값 1로 처리
    global cnt
    cnt += 1
    for i in matrix[v]:
        if visited[i] == 0:
            dfs(i)

dfs(1)

print(cnt-1)
