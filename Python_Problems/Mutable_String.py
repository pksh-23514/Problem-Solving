# Description  : Read a given String, change the character at a given index and print the modified String.
#                Function Description: mutate_string has the following parameters:
#                - string string   : the String to change.
#                - int position    : The index to insert the character.
#                - string character: The character to insert.
#                - altered_string  : Return the modified String.
# Sample Input : abracadabra
#                5 k
# Sample Output: abrackdabra
# *****************************************************************************************************************************************************************************

def mutate_string (string, position, character):

    # Declare an empty String to store the modified String.
    mut_string = ""

    # Convert the String into List.
    my_list = list (string)

    # Modify the List with the character.
    my_list [position] = character

    # Join the List to create the modified String.
    # Syntax: string.join (iterable)
    # Where:  iterable - Any iterable Object where all the Values are Strings.
    #         string - The delimiter to be used for joining all the iterable elements.
    # Return: String with the concatenated iterable elements and the delimiter.
    mut_string = ''.join (my_list)

    # Return the modified String.
    return mut_string

if (__name__ == "__main__"):

    # Input the String, Index position and the Character to be replaced.
    string = input ("Enter the Input String: ")
    print ("Enter the Index position and the Character to be replaced:")
    index, character = input ().split ()
    str_new = mutate_string (string, int (index), character)
    print ("The modified String is: ", str_new)
