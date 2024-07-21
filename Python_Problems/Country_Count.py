# Description  : Given the huge collection of 'n' Country stamps, count the total number of distinct Country stamps in the collection.
# Sample Input : 7
#                UK
#                China
#                USA
#                France
#                New Zealand
#                UK
#                France
# Sample Output: 5
# *****************************************************************************************************************************************************************************

def count_country (stamp):

    # Traverse the Set and count the number of elements of the Set.
    country_count = 0
    for _ in stamp:
        country_count += 1

    # Return the distinct Country stamps count.
    return country_count

if (__name__ == "__main__"):
    n = int (input ("Enter the value of n = "))

    # Input the names of the Country and add them in a Set so that no duplicates are added.
    print ("Enter the Country from which the Stamps are collected:")
    stamp = set ()
    for _ in range (n):
        string = input ()
        stamp.add (string)

    count = count_country (stamp)
    print ("The total number of the distinct Country stamps is: ", count)
