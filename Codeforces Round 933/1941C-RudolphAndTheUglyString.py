test = int(input())
length = []
strings = []
remove = []

for i in range(0, test):
    length[i] = int(input())
    strings[i] = input()
    remove[i] = 0

    while ("map" in strings[i]):
        remove[i] += 1
        strings[i].replace("map", "xx", 1)
    while ("pie" in strings[i]):
        remove[i] += 1
        strings[i].replace("pie", "xx", 1)

for i in range(0, test):
    print(remove[i])