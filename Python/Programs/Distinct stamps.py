n=int(input())
list=[None] * n
for i in range(0,n):
    list[i]=input()
print(len(set(list)))
