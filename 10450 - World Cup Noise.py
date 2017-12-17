ls=[1,2]

for i in range(2,5009):
    ls.append(ls[i-1]+ls[i-2])


t = int(input())
 

for i in range(1,t+1,1):
    try:
        n=int(input())
        
    except:
        break

    print("Scenario #",i,":",sep='')

    print(ls[n])
    print()

