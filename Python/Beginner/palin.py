data = input("Enter a string to check if it's palindrome: ")
ans = "Palindrome" if data[::-1] == data else "Not a Palindrome"
print(f"The given input is a {ans}")