def find_division():
    t = int(input()) 
    results = []
    
    for _ in range(t):
        rating = int(input())
        if rating >= 1900:
            results.append("Division 1")
        elif 1600 <= rating <= 1899:
            results.append("Division 2")
        elif 1400 <= rating <= 1599:
            results.append("Division 3")
        else: 
            results.append("Division 4")
    
    print("\n".join(results))

find_division()
