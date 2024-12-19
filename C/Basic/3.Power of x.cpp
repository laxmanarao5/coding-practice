#include<stdio.h>
#include<math.h>
int main()
{
int x,n,power;
printf("Enter the value of x and n:");
scanf("%d %d",&x,&n);
power=pow(x,n);
printf("%d",power);
return 0;
}
