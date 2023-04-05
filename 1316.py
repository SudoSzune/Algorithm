n = int(input())

gword = 0
for j in range(n):
    word = input()
    isGword = True
    for i in range(len(word)-1):
        if word[i] != word[i+1]:
            check = word[i]
            if check in word[i+1:]:
                isGword = False
                break
    if( isGword ):
        gword += 1

print(gword)
    