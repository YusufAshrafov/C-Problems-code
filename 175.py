# Misol 175 python3
s=input()
x=s.count('(')
p=''
for i in range(x):
    p+=s[:s.find('(')]
    a=s[s.find('(')+1:s.find(')')]
    s=s[s.find(')')+1:]
    for j in range(len(a)-1,-1,-1):
        p+=a[j]
    #s=s[s.find(')'):]
    #s[s.find('(')]='0'
    #s[s.find(')')]='1'
print(p+s)
