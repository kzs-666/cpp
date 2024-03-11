test = int(input())
length = []
strings = []
remove = []
m = False
p = False

for i in range(0, test):
    length.append(int(input()))
    strings.append(input())
    remove.append(0)

    if "map" in strings[i]:
        m = True
    while (m):
        remove[i] += 1
        strings[i].replace("map", "00", 1)
        if "map" not in strings[i]:
            m = False
    
    if "pie" in strings[i]:
        p = True
    while (p):
        remove[i] += 1
        strings[i].replace("pie", "00", 1)
        if "pie" not in strings[i]:
            p = False

for i in range(0, test):
    print(remove[i])
