a = int(input())

for i in range(1, a+1):
    print(' ' * (a - i), end='')
    print('*' * (i*2-1))

for i in range(a - 1, 0, -1):
    print(' ' * (a - i), end='')
    print('*' * (i*2-1))
