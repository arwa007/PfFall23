# Arwa Feroze 23k-0022
## Pseudocode
    procedure fillInwardSpiral(arr1[][], N):
    val = 1
    top = 0
    bottom = N - 1
    left = 0
    right = N - 1

    while val <= N * N:
        for i from left to right:
            arr1[top][i] = val
            val = val + 1
        top = top + 1

        for i from top to bottom:
            arr1[i][right] = val
            val = val + 1
        right = right - 1

        for i from right to left:
            arr1[bottom][i] = val
            val = val + 1
        bottom = bottom - 1

        for i from bottom to top:
            arr1[i][left] = val
            val = val + 1
        left = left + 1

    procedure fillOutwardSpiral(arr2[][], N):
    val = N * N
    top = 0
    bottom = N - 1
    left = 0
    right = N - 1

    while val >= 1:
        for i from left to right:
            arr2[top][i] = val
            val = val - 1
        top = top + 1

        for i from top to bottom:
            arr2[i][right] = val
            val = val - 1
        right = right - 1

        for i from right to left:
            arr2[bottom][i] = val
            val = val - 1
        bottom = bottom - 1

        for i from bottom to top:
            arr2[i][left] = val
            val = val - 1
        left = left + 1

    procedure printArray(arr[][], N):
    for i from 0 to N - 1:
        for j from 0 to N - 1:
            print(arr[i][j] + " ")
        print("\n")
    print("\n")

    function main():
    declare N as integer
    input N from user

    declare arr1[N][N] and arr2[N][N] as 2D arrays

    call fillInwardSpiral(arr1, N)
    call fillOutwardSpiral(arr2, N)

    print "Array 1 (inward spiral):"
    call printArray(arr1, N)

    print "Array 2 (outward spiral):"
    call printArray(arr2, N)
