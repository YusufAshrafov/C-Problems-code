# Misol 220 python3
n=int(input())
l=input();l=l.split(' ')
l=[ int(l[i]) for i in range(n) ]
max=max(l)
min=min(l)
for i in l:
    if(i != max and i!=min):
        print(i,end=' ')
    elif(i==max):
        print(min,end=' ')
    elif(i==min):
        print(max,end=' ')
