def max_subsequences(s):
    # Count total dashes and underscores
    dash_count = s.count('-')
    underscore_count = s.count('_')
    
    # If we don't have enough characters to form "-_-", return 0
    if dash_count < 2 or underscore_count < 1:
        return 0
    
    # To maximize "-_-" subsequences:
    # We need to arrange in this way: first some dashes, then underscores, then remaining dashes
    # Optimal arrangement: place half dashes before underscores, half after
    # This maximizes the product of (dashes before) * (underscores) * (dashes after)
    
    # Optimally split dashes into before/after
    dashes_before = dash_count // 2
    dashes_after = dash_count - dashes_before
    
    # In some cases, shifting one dash can improve the result
    # Try both splits and take the maximum
    result1 = dashes_before * underscore_count * dashes_after
    
    dashes_before = (dash_count + 1) // 2
    dashes_after = dash_count - dashes_before
    result2 = dashes_before * underscore_count * dashes_after
    
    return max(result1, result2)

# Read input and process test cases
t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    print(max_subsequences(s))