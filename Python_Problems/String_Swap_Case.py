# Description  : Given a String, swap the Cases in it i.e. convert all the Lowercase letters to Uppercase letters and vice versa.
# Sample Input : Www.HackerRank.com
# Sample Output: wWW.hACKERrANK.COM
# *****************************************************************************************************************************************************************************

def swap_case (string):

    # Syntax: string.swapcase ()
    # Return: String with the Cases swapped.
    return (string.swapcase ())

if (__name__ == "__main__"):

    # Input the Line from the User.
    s = input ("Enter the String: ")

    # Call the function to perform the Case swapping in the String.
    result = swap_case (s)

    print (f"Result: {result}")
