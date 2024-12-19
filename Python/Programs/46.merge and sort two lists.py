a=[]
c=[]
n1=int(input("enter number of elements:"))
for i in range(1,n1+1):
    b=int(input("enter element:"))
    a.append(b)
n2=int(input("enter number of elements:"))
for i in range(1,n2+1):
    d=int(input("enter element:"))
    c.append(d)
new=a+c
new.sort()
print("sorted list is:",new)
