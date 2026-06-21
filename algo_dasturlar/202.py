# Misol 202 python 3
n=int(input())
t=input();t=t.split(' ')
s=0;i=0;j=1;p=1
while(n>i):
    p*=int(t[i])
    s+=p
    i+=1
while(s>9):
    p=0
    while(s>0):
        p+=s%10
        s//=10
    s=p   
print(s)
