import operator

a = input()

a = a.upper()

tmp_dict = {}

for i in a:
    if i in tmp_dict.keys():
        tmp_dict[i] += 1
    else:
        tmp_dict[i] = 1

tmp_dict = sorted(tmp_dict.items(), key=operator.itemgetter(1), reverse = True)
if len(tmp_dict) == 1:
    print(tmp_dict[0][0])
elif(tmp_dict[0][1] == tmp_dict[1][1]):
    print('?')
else:
    print(tmp_dict[0][0])
