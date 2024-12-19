#include <stdio.h>
int main()
{
	int a, b, i, j, k;
	printf("Enter size for first dimention array (rows):- ");
	scanf("%d", &a);
	printf("\nEnter size for second dimention array (columns):- ");
	scanf("%d", &b);
	int arr[a][b];
	int array[a][b];
	int result[a][b];
	printf("Enter elements of first array:- \n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("Enter the element for position (%d, %d)", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Enter elements for second array:- \n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("Enter the element for position (%d, %d)", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	printf("our first array is :- \n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("our second array is :- \n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	printf("Addition of two arrays is :- \n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			result[i][j] = arr[i][j]+array[i][j];
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}
	printf("Subtraction of two arrays is :- \n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			result[i][j] = arr[i][j]-array[i][j];
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
