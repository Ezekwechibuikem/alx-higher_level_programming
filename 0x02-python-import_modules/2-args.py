#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    size = len(argv)
    if size == 1:
        print("0 arguments.")
    else:
        print(f"{size - 1} {'argument' if size == 2 else 'arguments'}:")
        for i, arg in enumerate(argv[1:], start=1):
            print(f"{i}: {arg}")
