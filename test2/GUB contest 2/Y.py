def wind_strength():
   
    r = int(input())

    heights = list(map(int, input().split()))
    
    wind_strength = max(heights) - min(heights)
    print(wind_strength)


wind_strength()
