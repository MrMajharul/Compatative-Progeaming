import sys

def main():
    for line in sys.stdin:
        sides = list(map(float, line.split()))
        
        perimeter = sum(sides)
        print(f"{perimeter:.4f}")

if __name__ == "__main__":
    main()
