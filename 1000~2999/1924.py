a, b = input().split()

day = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
a = int(a)
b = int(b)

count = 0
for i in range(1, a):
    count += days[i]

count += b

print(day[count%7])
