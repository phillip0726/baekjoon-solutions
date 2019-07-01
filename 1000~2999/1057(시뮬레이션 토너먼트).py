a = input()

arr = list(map(int, a.split()))

a = arr[1]
b = arr[2]
count = 0
while True:
    if a == b:
        break
    a = int(a / 2) + a % 2
    b = int(b / 2) + b % 2

    count += 1

print(count)
