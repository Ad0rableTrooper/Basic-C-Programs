data1 = sorted(input("Enter the first word: "))
data2 = sorted(input("Enter the second word: "))
ans = "Anagram" if data1 == data2 else "Not An Angram"
print(f"The given words are: {ans}")