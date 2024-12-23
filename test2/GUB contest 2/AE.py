def round_numbers():
    a = int(input())
    results = []

    for _ in range(t):
        n = int(input())
        place = 1
        terms = []
        
        while n > 0:
            digit = n % 10
            if digit != 0:
                terms.append(digit * place)
            n //= 10
            place *= 10
        
        results.append((len(terms), terms))
  
    for k, terms in results:
        print(k, *terms)

round_numbers()
