Python 3.7.0 (v3.7.0:1bf9cc5093, Jun 27 2018, 04:59:51) [MSC v.1914 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> num = int(input("Enter a number: "))
sum=0
temp=num
while temp > 0:
    digit = temp % 10
    sum += digit ** 3
    temp //= 10
if num==sum
   print(num,"is an Armstrong number")
else:
   print(num,"is not an Armstrong number")
