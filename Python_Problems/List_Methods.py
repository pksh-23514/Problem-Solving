# Description  : Consider an empty List. Perform the following commands:
#                insert i e - Insert integer e at position i.
#                print      - Print the List.
#                remove e   - Remove the first occurence of the integer e.
#                append e   - Append the integer e at the end of the List.
#                sort       - Sort the List.
#                pop        - Pop the last element of the List.
#                reverse    - Reverse the List.
# Sample Input : 4
#                insert 0 5
#                insert 1 10
#                insert 0 6
#                print
# Sample Output: [6, 5, 10]
# *****************************************************************************************************************************************************************************

def execute (my_list, command):
    
    if (command [0] == 'insert'):
        my_list.insert (int (command [1]), int (command [2]))

    elif (command [0] == 'print'):
        print (my_list)

    elif (command [0] == 'remove'):
        my_list.remove (int (command [1]))

    elif (command [0] == 'append'):
        my_list.append (int (command [1]))

    elif (command [0] == 'sort'):
        my_list.sort ()

    elif (command [0] == 'pop'):
        my_list.pop ()

    else:
        my_list.reverse ()

if (__name__ == "__main__"):
    n = int (input ("Enter the value of n = "))

    # Declare an empty List and one List to contain the commands.
    my_list = list ()
    command = list ()

    for _ in range (n):
        string = input ()
        command = string.split ()

        # Call the function to perform the Operation on the List.
        execute (my_list, command)

# *****************************************************************************************************************************************************************************
# Note:
# =====
# Syntax: list.append (element)
#         list.insert (index, element)
#         list.pop (index)
#         list.remove (element)
#         list.reverse ()
#         list.sort ()
# Where:  element - An element of any type (string, number, object etc.).
#         index - A number specifying the position to insert / remove the value.
