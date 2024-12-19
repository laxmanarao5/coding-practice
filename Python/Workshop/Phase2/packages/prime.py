def prime(a):
    count=0
    for i in range(2,a):
        if(a%i==0):
            count=count+1
    if(count==0):
        return True
    else:
        return False
def primel(l,u):
    count=0
    if(l<2):
        l=2
    for i in range(l,u+1):
        if prime(i):
            print(i,end=" ")
            count=count+1
    print("\nTotal prime numbers are ",count)