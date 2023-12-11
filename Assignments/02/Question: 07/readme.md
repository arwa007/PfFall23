# Arwa Feroze 23k-0022
## Pseudocode:

    Function sortByAgeAndPrice(ages[], prices[], n):
    // Bubble sort algorithm to sort shirts based on age in ascending order
    for i from 0 to n - 2:
        for j from 0 to n - i - 2:
            if ages[j] > ages[j + 1]:
                Swap ages[j] with ages[j + 1]
                Swap prices[j] with prices[j + 1]

    // Sort shirts within the same age based on price in descending order
    for i from 0 to n - 2:
        for j from i + 1 to n - 1:
            if ages[i] == ages[j] and prices[i] < prices[j]:
                Swap prices[i] with prices[j]

    Function printSortedDetails(ages[], prices[], n):
    Print "Sorted list in ascending order with respect to Age:"
    Print "Age\tPrice"
    for i from 0 to n - 1:
        Print ages[i] + "\t" + prices[i]

    Print newline

    Print "Sorted list in descending order with respect to Price within the same Age:"
    Print "Age\tPrice"
    for i from 0 to n - 1:
        Print ages[i] + "\t" + prices[i]

    Function main():
    Declare arrays ages and prices of size n
    Input ages and prices

    Call sortByAgeAndPrice(ages, prices, n)
    Call printSortedDetails(ages, prices, n)
