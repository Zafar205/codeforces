arr = []
sett = set()
for i in range(4):
    n = int(input())
    arr.append(n)
    sett.add(n)

print(len(arr)-len(sett))    