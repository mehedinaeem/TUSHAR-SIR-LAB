def input_matrix(x, y, matrix):
    for i in range(x):
        matrix.append([])  # Append an empty list to represent each row
        for j in range(y):
            e = int(input(f"Enter {i}th row {j}th column element: "))
            matrix[i].append(e)  # Append the element to the respective row

def output_matrix(x, y, matrix):
    for i in range(x):
        for j in range(y):
            print(matrix[i][j], end=" ")  # Print each element of the matrix
        print(" ")  # Move to the next row

row = int(input("Enter row: "))
column = int(input("Enter column: "))
A = []  # Initialize an empty matrix
input_matrix(row, column, A)
output_matrix(row, column, A)
