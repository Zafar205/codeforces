# length = int(input())  # Read the length of the array
# arr = list(map(int, input().split()))  # Read the array in one go

# p_comp = 0
# v_comp = 0

# n = int(input())  # Read number of queries
# queries = list(map(int, input().split()))  # Read all queries at once

# for searchable in queries:
#     # Petya starts from the end
#     for i in range(len(arr) - 1, -1, -1):
#         if searchable == arr[i]:
#             p_comp += 1
#             break
#         else:
#             p_comp += 1

#     # Vasya starts from the start
#     for i in arr:
#         if searchable == i:
#             v_comp += 1
#             break
#         else:
#             v_comp += 1

# print(v_comp, p_comp)


#time limit exceeeded in this one

# Read input values
n = int(input())  
arr = list(map(int, input().split()))  # Read array in one go

# Create a dictionary to store positions of elements
pos = {}
for i in range(n):
    pos[arr[i]] = i + 1  # Store 1-based index

# Read queries
m = int(input())
queries = list(map(int, input().split()))

# Compute comparisons
vasya_comparisons = 0
petya_comparisons = 0

for query in queries:
    index = pos[query]  # Find the position of the query in O(1)
    vasya_comparisons += index  # Vasya searches from start
    petya_comparisons += (n - index + 1)  # Petya searches from end

# Print results
print(vasya_comparisons, petya_comparisons)
