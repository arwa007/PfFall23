# Arwa Feroze 23k-0022
## Pseudocode:

    Function isSafe(x, y):
    if (x is within bounds) AND (y is within bounds) AND (maze[x][y] is not a wall):
        return true
    else:
        return false

    Function solveMaze():
    Create a stack of Points
    Initialize top = -1

    Find the starting point ('S')
    Set startX and startY to the coordinates of 'S'
    Create a Point start with coordinates (startX, startY)
    Push start onto the stack

    while stack is not empty:
        current = Pop from the stack

        x = current.x, y = current.y

        if (maze[x][y] is the exit 'E'):
            return true // Path found

        if (isSafe(x, y)):
            maze[x][y] = '*' // Mark the path

            directions = array of Point representing four directions: up, down, left, right

            for each direction in directions:
                newX = x + direction.x
                newY = y + direction.y

                next = Point with coordinates (newX, newY)
                if (isSafe(newX, newY)):
                    Push next onto the stack

    return false // No path found

    Function main():
    if solveMaze() returns true:
        Display "Path found!"
        Print the solved maze with the path marked
    else:
        Display "No path found."
