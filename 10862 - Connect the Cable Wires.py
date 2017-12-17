ls=[0,1];

for i in range(2,4002):
    ls.append((ls[i-1]+ls[i-2]))

while(True):
    n = int(input());
    if(n==0):
        break;

    print(ls[n*2])
