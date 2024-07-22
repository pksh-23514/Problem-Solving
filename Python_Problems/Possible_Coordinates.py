# Description  : Given three integers 'x', 'y' and 'z' representing the dimensions of the cuboid along with an integer 'n'.
#                Print all the possible coordinates given by (i, j, k) on 3D grid where the sum of (i, j, k) is not equal to 'n'.
#                Here: 0 <= i <= x; 0 <= j <= y; 0 <= k <= z.
# Sample Input : 1
#                1
#                1
#                2
# Sample Output: [[0, 0, 0], [0, 0, 1], [0, 1, 0], [1, 0, 0], [1, 1, 1]]
# *****************************************************************************************************************************************************************************

if (__name__ == "__main__"):
    x = int (input ("Enter the value of x = "))
    y = int (input ("Enter the value of y = "))
    z = int (input ("Enter the value of z = "))
    n = int (input ("Enter the value of n = "))

    # Using the List Comprehension can be a sleek way to replace the Nested Loops required to check the condition.
    result = [[i, j, k] for i in range (x + 1) for j in range (y + 1) for k in range (z + 1) if ((i + j + k) != n)]

    print ("The possible coordinates for the given condition (i + j + k) != n are:")
    print (result)
