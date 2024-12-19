a=int(input('Enter a number:'))
def rec(x):
    if x==1:
        return 1
    else:
        return(x*rec(x-1))
num=a
print("The factorial of ",num,"is",rec(num))
