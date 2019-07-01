a = input()

arr = list(map(int, a.split()))

a = arr[0]
b = arr[1]
c = arr[2]

sum = a + b
count = 1

if b >= c:
    print(-1)
else:
    print(int(a / (c - b)) + 1 )
