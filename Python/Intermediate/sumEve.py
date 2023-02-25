num = [1, 2, 3, 4, 5]
sum = 0
for i in num:
    if i % 2 == 0:
        sum += i
    else:
        continue

print(f"The sum of the even numbers in the list: {sum}")