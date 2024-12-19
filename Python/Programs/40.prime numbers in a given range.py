lower=int(input("enter lower range:"))
upper=int(input("enter upper range:"))
count=0
print("prime numbers between",lower,"and",upper,"are:")
for num in range(lower,upper+1):
    for i in range(2,num):
            if num==1:
                count=1
            else:
                if (num%i)==0:
                    count=count+1
    if count==0:
        print(num)
    count=0
