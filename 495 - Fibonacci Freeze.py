
ls =[0,1]

for i in range(2,5001,1):
    ls.append(ls[i-1]+ls[i-2])


while(True):
    try:
        n=int(input())
    except:
        break;

    print("The Fibonacci number for",n,"is",ls[n])
    
