# Arwa Feroze 23k-0022
## Pseudocode:

    Function findPairs(arr[], size, target):
    Print "Pairs: "
    for i from 0 to size - 2:
        for j from i + 1 to size - 1:
            if arr[i] + arr[j] == target:
                Print "(" + arr[i] + ", " + arr[j] + ") "
    Print newline

    Function main():
    Input size
    Declare array arr of size 'size'

    Print "Enter 'size' elements:"
    for i from 0 to size - 1:
        Input arr[i]

    Input target

    Print "List: "
    for i from 0 to size - 1:
        Print arr[i] + " "
    Print "and t: " + target

    Call findPairs(arr, size, target)
