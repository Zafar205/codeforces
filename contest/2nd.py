def min_substring_to_palindrome(s):
    n = len(s)
    
    # If already a palindrome
    if s == s[::-1]:
        return 0
    
    left, right = 0, n - 1
    while left < right:
        if s[left] == s[right]:
            left += 1
            right -= 1
        else:
            # Try to match left character
            min_left = float('inf')
            for i in range(right - 1, left - 1, -1):
                if s[i] == s[left]:
                    # We shuffle [i...right]
                    min_left = right - i + 1
                    break
            
            # Try to match right character
            min_right = float('inf')
            for i in range(left + 1, right + 1):
                if s[i] == s[right]:
                    # We shuffle [left...i]
                    min_right = i - left + 1
                    break
            
            return min(min_left, min_right)
    
    return 0  # Already a palindrome

# Process test cases
def process_test_cases():
    t = int(input())
    results = []
    
    for _ in range(t):
        s = input().strip()
        results.append(min_substring_to_palindrome(s))
    
    for result in results:
        print(result)

# Run the solution
if __name__ == "__main__":
    process_test_cases()