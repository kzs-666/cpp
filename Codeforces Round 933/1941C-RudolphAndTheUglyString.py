test = int(input())
length = []
strings = []
remove = []
m = "map"
p = "pie"

for i in range(0, test):
    length.append(int(input()))
    strings.append(input())
    remove.append(0)

    while m in strings[i]:
        remove[i] += 1
        strings[i] = strings[i].replace("map", "", 1)
    
    while p in strings[i]:
        remove[i] += 1
        strings[i] = strings[i].replace("pie", "", 1)

for i in range(0, test):
    print(remove[i])
