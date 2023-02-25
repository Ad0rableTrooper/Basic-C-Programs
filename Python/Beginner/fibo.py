n = int(input("Enter the limit of the sequence: "))
i = 0
j = 1
while i < n:
    print(i)
    i, j = j, i + j