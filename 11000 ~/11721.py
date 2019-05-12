a = input()

i = 0
while(True):
    if i+11 > len(a):
        print(a[i:])
        break
    else:
        print(a[i:i+10])
    i += 10
