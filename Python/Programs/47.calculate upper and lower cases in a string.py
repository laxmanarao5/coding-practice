string=input("Enter a string:")
count1=0
count2=0
for i in string:
    if(i.islower()):
        count1=count1+1
    elif(i.isupper()):
        count2=count2+1
print("The number of lowercase letters are:",count1)
print("The number of uppercase letters are:",count2)

