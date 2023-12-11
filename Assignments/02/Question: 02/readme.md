# Arwa Feroze 23k-0022 <br>
## Pseudocde:

    Function largestSquareSubmatrix(matrix, rows, cols):
    maxSize = 0
    maxRow = 0
    maxCol = 0

    Create an auxiliary matrix aux[rows][cols]

    # Copy the first row and first column as is
    for i from 0 to rows:
        aux[i][0] = matrix[i][0]
    end for

    for j from 0 to cols:
        aux[0][j] = matrix[0][j]
    end for

    # Filling up the auxiliary matrix
    for i from 1 to rows:
        for j from 1 to cols:
            if matrix[i][j] == 1:
                aux[i][j] = min(aux[i - 1][j - 1], min(aux[i - 1][j], aux[i][j - 1])) + 1
                if aux[i][j] > maxSize:
                    maxSize = aux[i][j]
                    maxRow = i - maxSize + 1
                    maxCol = j - maxSize + 1
                end if
            else:
                aux[i][j] = 0
            end if
        end for
    end for

    # Displaying the largest square submatrix of 1s
    if maxSize > 0:
        Print "Largest Square Submatrix of 1s:"
        for i from maxRow to maxRow + maxSize - 1:
            for j from maxCol to maxCol + maxSize - 1:
                Print matrix[i][j]
            end for
            Print newline
        end for
        Print "Dimensions (rows x cols):", maxSize, "x", maxSize
    else:
        Print "No square submatrix of 1s found."
    end if

    Function main():
    Input rows, cols

    Create matrix[rows][cols]

    Input elements of the matrix (0s and 1s)

    Call largestSquareSubmatrix(matrix, rows, cols)

