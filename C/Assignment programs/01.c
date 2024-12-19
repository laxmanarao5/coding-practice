#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	float km,m,feet,inch,cm;
	printf("Enter the distance(km) : ");
	scanf("%f",&km);
	m=1000*km;
	feet=(km*3280.84);
	inch=(km*39370.1);
	cm=(km*100000);
	printf("Distance in Meters : %f \n",m);
	printf("Distance in Feets : %f \n",feet);
	printf("Distance in Inches : %f \n",inch);
	printf("Distance in Centimeters : %f \n",cm);
	return 0;
}
