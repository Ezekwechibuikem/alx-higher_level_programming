#!/usr/bin/python3
"""
This module contains a function that adds 2 integers.
"""

def add_interger(a, b=98):
    """
    This function adds 2 integers.
    """
    if type(a) is float:
        a = int(a)
    if type(b) is not int:
        raise TypeError("a must be an integer")
    if type(b) is not int:
        raise TypeError("b must be an interger")
    return a + b
