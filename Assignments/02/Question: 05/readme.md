# Arwa Feroze 23k-0022
## Pseudocode:

    Function findRamanujanHardyNumbers(n):
    limit = n * n * n

    for a from 1 to n - 1:
        a3 = a * a * a
        if a3 >= limit:
            break

        for b from a to n - 1:
            b3 = b * b * b
            sum = a3 + b3

            if sum >= limit:
                break

            c = cuberoot(sum)
            if c * c * c == sum and c > b:
                Print sum, a, b, b, a

    Function main():
    Input n
    Print "Ramanujan-Hardy numbers less than n^3:"
    Call findRamanujanHardyNumbers(n)
