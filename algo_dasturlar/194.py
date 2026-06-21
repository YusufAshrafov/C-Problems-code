# Misol 194 pithon3 31.10.2021 11:59
def f1(x):
    x=str(x);a=0
    for i in range(1,len(x)):
        a+=int(x[:i])
    return a
def f(x,y,m):
    qoldiq=int(f1(x))
    p=sum([int(i) for i in str(x)])
    while(p>9):
        qoldiq+=int(f1(p))
        p=sum([int(i) for i in str(p)])
    p=x-((x//9-1)*9)
    o=0
    for i in range(1,p+1):
        o+=int(str(y)*i)
    if(p>9):
        qoldiq-=1
    o-=qoldiq*y
    return ((x//9-1)*m+(sum([int(i)*int(i) for i in str(o)])))
def f9(x,y,z):
    if(x!=1):
        a=int(z*'1'+'0')-x
        o=0
        for i in str(a):
            o+=int(i)*int(i)
        return x-z+o
    return 81
x=input()
x=x.split(' ')
y=int(x[1])
x=int(x[0])
if(y!=9):
    b=0
    if(y==1):
        b=221
    if(y==2):
        b=236
    if(y==3):
        b=174
    if(y==4):
        b=260
    if(y==5):
        b=269
    if(y==6):
        b=195
    if(y==7):
        b=281
    if(y==8):
        b=284
    print(f(x,y,b))
else:
    print(f9(x,y,len(str(x))))
////
