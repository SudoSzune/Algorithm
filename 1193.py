x = int(input())

for n in range(x+1):
    if n*(n+1)/2 >= x:
        if( x - int((n*(n-1)/2)) >= 0):
            a = n
            b = x - int((n*(n-1)/2))
        else:
            a = n
            b = -( x - int((n*(n-1)/2)))
        break

if(a%2==0):
    print('{}/{}'.format(b,n+1-b))
else:
    print('{}/{}'.format(n+1-b,b))





