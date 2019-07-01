a = input()

arr = list(map(int, a.split()))

a = arr[0]
b = arr[1]
v = arr[2]

print(int((v- b - 1) / (a - b)) + 1)
