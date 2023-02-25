import math
num1, num2 = int(input("Enter the first number")), int(input("Enter the second number"))
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
    
for j in range(num1, num2):
    if prime(j) == True:
        print(j)
    else:
        continue