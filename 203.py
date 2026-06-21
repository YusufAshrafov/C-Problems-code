# Misol 203 python3
n=int(input())
o=input()
o=o.split(' ')
m=int(input())
s=1;u=[]
for i in range(0,m):
    l=input();l=l.split(' ')
    for j in range((int(l[0])-1),(int(l[1]))):
        s*=int(o[j])
    u.append(s%(int(l[2])))
    s=1
for i in range(0,m):
    print(u[i])
