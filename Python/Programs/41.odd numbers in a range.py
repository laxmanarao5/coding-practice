lower=int(input("enter lower range:"))
upper=int(input("enter upper range:"))
for i in range(lower,upper+1):
    if(i%2!=0):
        print(i)
