from collections import defaultdict

def count_pairs_with_sum(arr, k):
    freq = defaultdict(int)
    count = 0
    for num in arr:
        complement = k - num
        if complement in freq:
            count += freq[complement]
        freq[num] += 1

    return count
n, k = map(int, input().split())
arr = list(map(int, input().split()))
result = count_pairs_with_sum(arr, k)

print(result)
