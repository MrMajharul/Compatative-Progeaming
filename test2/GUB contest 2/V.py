import math

def count_integer_points_in_circle(r):
    count = 0
    for x in range(-r, r + 1): 
        y_max = math.isqrt(r * r - x * x)  
        count += (2 * y_max + 1)  
    return count


r = int(input())

print(count_integer_points_in_circle(r))