# Description  : Split the String " " (delimiter) and Join the same using "-" (delimiter).
# Sample Input : this is a string
# Sample Output: this-is-a-string
# *****************************************************************************************************************************************************************************

def split_and_join (string):
    
    # Syntax: string.split (separator, maxsplit)
    # Where:  separator - Specifies the separator to use while splitting the String. Default is whitespace.
    #         maxsplit - Specifies the number of Splits to be done on the String. Default is -1 i.e. all the occurences of the separator.
    # Return: List containing all the Splits.
    res = string.split (" ")

    # Syntax: string.join (iterable)
    # Where:  iterable - Any iterable Object where all the Values are Strings.
    #         string - The delimiter to be used for joining all the iterable elements.
    # Return: String with the concatenated iterable elements and the delimiter.
    return ("-".join (res))

if (__name__ == "__main__"):
    
    # Input the Line from the User.
    line = input ("Enter the String: ")

    # Call the function to perform the delimiter replacement in the String.
    result = split_and_join (line)

    print (f"Result: {result}")
