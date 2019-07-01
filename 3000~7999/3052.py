
arr = []
dic = {}
count = 0
for i in range(10):
    a = int(input())
    if ( a % 42 ) not in dic.keys():
        count += 1
        dic[a % 42] = 1

print(count)


