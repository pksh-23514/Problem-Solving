# Description  : Given the partial code to print the below pattern of variable thickness (only odd values), insert the appropriate alignment in the blanks.
# Sample Input : 5
# Sample Output:
#     H
#    HHH
#   HHHHH
#  HHHHHHH
# HHHHHHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHHHHHHHHHHHHHHHHHHHHHH
#   HHHHHHHHHHHHHHHHHHHHHHHHH
#   HHHHHHHHHHHHHHHHHHHHHHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#   HHHHH               HHHHH
#                     HHHHHHHHH
#                      HHHHHHH
#                       HHHHH
#                        HHH
#                         H
# *****************************************************************************************************************************************************************************

if (__name__ == "__main__"):
    thickness = int (input ("Enter the value of Thickness = "))
    ch = 'H'

    # Top Cone of the Pattern.
    for i in range (thickness):
        print ((ch * i).rjust (thickness-1) + ch + (ch * i).ljust (thickness-1))

    # Top Pillars of the Pattern.
    for i in range (thickness + 1):
        print ((ch * thickness).center (thickness*2) + (ch * thickness).center (thickness*6))

    # Middle Belt of the Pattern.
    for i in range ((int) ((thickness + 1) / 2)):
        print ((ch * thickness * 5).center (thickness * 6))

    # Bottom Pillars of the Pattern.
    for i in range (thickness + 1):
        print ((ch * thickness).center (thickness * 2) + (ch * thickness).center (thickness * 6))

    # Bottom Cone of the Pattern.
    for i in range (thickness):
        print (((ch * (thickness - i - 1)).rjust (thickness) + ch + (ch * (thickness - i - 1)).ljust (thickness)).rjust (thickness * 6))

# *****************************************************************************************************************************************************************************
# Note:
# =====
# String alignment methods are used to align Strings and offers a way to add user specified padding instead of blank space.
# These methods respectively "left-justify()", "right-justify()" and "center()" a String in a field of given width.
# They return a String that is at least 'width' characters-wide, created by padding the String with the character 'fillchar' (default is space).
# The String is never truncated. The padding is done until the given width on right, left or both sides are filled equal to width.
# Syntax: center (width, fillchar)
#         ljust (width, fillchar)
#         rjust (width, fillchar)
# Where:  width - The width of the String to expand it.
#         fillchar - The character to fill the remaining space apart from the String.
# Return: The resultant center-aligned String expanding the given width.
#         The resultant left-aligned String expanding the given width.
#         The resultant right-aligned String expanding the given width.
# Usage:  string.center (width, fillchar)
#         string.ljust (width, fillchar)
#         string.rjust (width, fillchar)
