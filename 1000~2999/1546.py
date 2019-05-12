a = int(input())

num_list = list(map(int, input().split()))

num_list.sort()

max = num_list[a-1]

print(sum(num_list)/max*100/a)
