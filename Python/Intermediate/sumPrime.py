import math
n = int(input("Enter a number: "))
def prime(n):
    if n <= 1:
        return False
    elif n == 2:
        return True
    else:
        for i in range(2, int(math.sqrt(n))+1):
            if n % i == 0:
                return False
        return True
    
sum = 0
for i in range(n):
    if prime(i) == True:
        sum += i
    else:
        continue

print(f"The sum of all the prime numbers occuring between the range is : {sum}")