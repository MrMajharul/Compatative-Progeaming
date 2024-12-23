def max_pyramid_height(n):
    height = 0
    total_cubes = 0

    level = 1
    while True:
        cubes_needed = level * (level + 1) // 2
       
        if total_cubes + cubes_needed > n:
            break
        total_cubes += cubes_needed
        height += 1
        level += 1

    return height

n = int(input())
print(max_pyramid_height(n))
