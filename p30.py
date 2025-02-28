# Read input
n, m = map(int, input().split())
candies_needed = list(map(int, input().split()))

children = [[i+1, candies_needed[i]] for i in range(len(candies_needed))]

while len(children) > 1:
    current_child = children.pop(0)
    
    if current_child[1] > m:
        # If child still needs more candies after getting m,
        # put them back at the end with reduced candy need
        children.append([current_child[0], current_child[1] - m])

print(children[0][0])