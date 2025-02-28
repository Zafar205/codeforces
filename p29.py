def solve(n, friends_fingers):
    total_friends_fingers = sum(friends_fingers)
    count = 0
    
    for dima_fingers in range(1, 6):
        total = total_friends_fingers + dima_fingers
        if total % (n+1) != 1:  # If count doesn't land on Dima
            count += 1
    
    return count

n = int(input())
friends_fingers = list(map(int, input().split()))
print(solve(n, friends_fingers))