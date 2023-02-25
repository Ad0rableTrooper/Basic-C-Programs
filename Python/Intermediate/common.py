list1 = [1, 2, 3, 4, 5]
list2 = [4, 5, 6, 7, 8]
comm = list(set(list1) & set(list2))
print("Commomn Elements: ", comm)