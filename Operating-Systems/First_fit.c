#include<stdio.h>

int main()
{
	int nb,nf,i,j,file;
	printf("Enter the number of Blcoks : ");
	scanf("%d",&nb);
	printf("Enter the number of Files : ");
	scanf("%d",&nf);
	int block_array[nb],files_array[nf],index_array[nb],count=0;
	printf("Enter the sizes of the each blcok\n");
	for(i=1;i<=nb;i++){
		printf("Enter the Blcok%d size : ",i);
		scanf("%d",&block_array[i]);
		index_array[i] = 0;
	}
	printf("Enter the sizes of the each Process\n");
	for(i=1;i<=nf;i++){
		printf("Enter the P%d size : ",i);
		scanf("%d",&files_array[i]);
	}
	printf("Process\tBlock_no\tFragmentation\n");
	for(i=1;i<=nf;i++){
		file = files_array[i];
		for(j=1;j<=nb;j++){
			if(file<=block_array[j] && index_array[j] == 0){
				block_array[j] -= file;
				index_array[j] = i;
				count++;
				printf("%d\t%d\t%d\n",index_array[j],j,block_array[j]);
				break;
			}
		}
	}
	if(count==nf)
		printf("Successfully Memory Allocated for all Processes");
	else
		printf("InSufficient Memory");
	return 0;
}
