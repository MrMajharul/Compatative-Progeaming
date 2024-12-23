def min_operations_to_sort(arr, n):
    # Find the longest non-decreasing prefix
    longest_non_decreasing_prefix = 1  # The first element is already sorted
    for i in range(1, n):
        if arr[i] >= arr[i-1]:
            longest_non_decreasing_prefix += 1
        else:
            break
    
    # If the entire array is already sorted
    if longest_non_decreasing_prefix == n:
        return 0
    
    # Otherwise, check if it's impossible to sort
    if arr[-1] < arr[0]:
        return -1
    return n - longest_non_decreasing_prefix

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        print(min_operations_to_sort(arr, n))
solve()
