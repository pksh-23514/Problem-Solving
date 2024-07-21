# Description  : Given an integer 'n' and 'n' space-separated integers, create a Tuple of those integers and compute the result of "hash()".
# Sample Input : 2
#                1 2
# Sample Output: -3550055125485641917
# *****************************************************************************************************************************************************************************

if (__name__ == "__main__"):
    n = int (input ("Enter the value of n = "))
    print ("Enter the Integer values:")
    integer_list = map(int, input().split())

    my_tuple = tuple (integer_list)

    # Syntax: hash (object)
    # Where:  The Object need to be converted into Hash.
    # Return: If possible, returns the Hashed value.
    print (f"Hash Value for the Tuple {my_tuple} is: {hash (my_tuple)}")

# *****************************************************************************************************************************************************************************
# Note:
# =====
# In Python, the "hash()" function is a Built-in function and returns the hash value of an object if it has one.
# The Hash value is a unique integer for an Object that is used to quickly compare the keys while looking at a Dictionary.
# Objects hashed using "hash()" are irreversible, leading to loss of information.

# The "hash()" function returns hashed value only for immutable Objects, hence can be used as an indicator to check for mutable / immutable Objects.
# Eg.- tuple_val = (1, 2, 3, 4, 5) => hash (tuple_val) => 8315274433719620810
# Eg.- list_val = [1, 2, 3, 4, 5] => hash (list_val) => TypeError: unhashable type: 'list'
# Eg.- int_val = 4 => hash (int_val) => 4
# Eg.- str_val = "GFG" => hash (str_val) => 4349415460800802357

# It can be used to encode data for security.
