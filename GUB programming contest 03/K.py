from collections import Counter

def longest_subsequence(arr):
    freq = Counter(arr)
    max_freq = max(freq.values())
    
    return max_freq

n = int(input())
arr = list(map(int, input().split()))
result = longest_subsequence(arr)
print(result)
