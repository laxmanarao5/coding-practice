a=[]
n=int(input('Enter number of elements:'))
for i in range(1,n+1):
    b=int(input('Enter an element:'))
    a.append(b)
a.sort()
print('largest number in list is',a[n-1])
