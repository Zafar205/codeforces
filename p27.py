from collections import Counter

x = input()
y = input()
z = input()

a = Counter(x) + Counter(y)
b = Counter(z)

if(a == b):
    print("YES")
else:
    print("NO")    
