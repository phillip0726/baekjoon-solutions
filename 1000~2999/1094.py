a = int(input())

count = 1
sum = 0
x = 64

while True:
    if a - x == 0:
        print(count)
        break
    if a - x / 2 == 0:
        print(count)
        break
    x /= 2
    if a > x:
        a -= x
        count +=1 
    
