num = []
i = 0
while i != 5:
    num.append(int(input("Enter a number for the list: ")))
    i += 1
num.sort()
firstIndex = num[0]
lastIndex = num[-1]

n = int(input("Enter a number which you are supposed to find among the given list: "))

def binary_search(arr, target):
    """
    Searches for a target value in a sorted list using binary search.
    Returns the index of the target value if found, or -1 if not found.
    """
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1

print(binary_search(num, n))
