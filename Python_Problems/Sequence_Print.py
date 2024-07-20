# Description  : Without using any string methods, try to print the seqeuence following: 123...n
#                The "..." represents the consecutive values in between 1 and n.
# Sample Input : n = 5
# Sample Output: 12345
# *****************************************************************************************************************************************************************************

def print_sequence (n):

    # Syntax: range (start, stop, step)
    # Where:  start - An integer number specifying the start position. It is Optional parameter and the default value is 0.
    #         stop - An integer number specifying the end position. It is Required parameter.
    #         step - An integer number specifying the increment/decrement of the sequence. It is an Optional parameter and the default value is 1.
    # Return: Sequence containing all the numbers based on the start, stop and step parameters.
    n = range (1,  (n + 1), 1)
    for i in n:
        print (i, end = '')

if (__name__ == "__main__"):
    n = int (input ("Enter the value of n = "))
    print_sequence (n)
    print ()
