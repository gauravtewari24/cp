import math
t=int(input())
for i in range(t):
    sa=input().split(' ')
    n =int(sa[0])
    k=int(sa[1])
    rootn=int(math.sqrt(n))
    div=1
    for i in range(2,rootn+1):
        if(n%i==0):
            div=i
            break
    if(div==1):
        div=n
    while(k>0):
        if(div==2):
            break
        n+=div
        k-=1
        for i in range(2,div):
            if(n%i==0):
                div=i
                break

    if(k>0):
        if(div==2):
            n+=div*k
    print(n)
