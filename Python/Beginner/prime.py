import math
n = int(input('Enter a number to check if it is prime or not: '))

def prime(n):
    if n <= 1:
        return False
    elif n == 2:
        return True
    else:
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
        return True
    
print(f"The given number is {prime(n)}")