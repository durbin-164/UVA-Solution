ls=[1,2]

for i in range(2,1009):
    ls.append(ls[i-1]+ls[i-2])

while(True):
    try:
        n=int(input())
    except:
        break

    print(ls[n])
