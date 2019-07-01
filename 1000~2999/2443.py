a = int(input())

for i in range(a, 0, -1):
    print(' ' * (a - i), end='')
    print('*' * (i*2-1))
