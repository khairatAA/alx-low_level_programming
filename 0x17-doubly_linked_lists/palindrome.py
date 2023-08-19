#!/usr/bin/python3
def palindrome(value):
    return str(value) == str(value)[::-1]
largest_palindrome = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if palindrome(product) and product > largest_palindrome:
            largest_palindrome = product
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
