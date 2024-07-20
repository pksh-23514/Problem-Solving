# Description  : Given an integer 'n', perform the following actions:
#                If 'n' is odd, print "Weird".
#                If 'n' is even and in the inclusive range of 2 to 5, print "Not Weird".
#                If 'n' is even and in the inclusive range of 6 to 20, print "Weird".
#                If 'n' is even and greater than 20, print "Not Weird".
# Sample Input : 3
# Sample Output: Weird
# Sample Input : 24
# Sample Output: Not Weird
# *****************************************************************************************************************************************************************************

if (__name__ == "__main__"):
    n = int (input ("Enter the value of n = "))

if ((n % 2) == 1):
    print ("Weird.")
else:
    if ((n >= 2) and (n <= 5)):
        print ("Not Weird.")
    elif ((n >= 6) and (n <= 20)):
        print ("Weird.")
    else:
        print ("Not Weird.")
