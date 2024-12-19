lower=int(input("enter a lower limit:"))
upper=int(input("enter a upper limit:"))
n=int(input("enter a number to be divided:"))
for i in range(lower,upper+1):
    if(i%n==0):
        print(i)
