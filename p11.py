x = input()
l_count = 0
u_count = 0

for i in x:
    if i.isupper():
        u_count += 1
    else:
        l_count += 1

if l_count >= u_count :
    print(x.lower())
else:
    print(x.upper())    