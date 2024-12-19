#include<stdio.h>

int main(){
	int nb,nf,i,j,temp,file;
	printf("Enter the number of blocks : ");
	scanf("%d",&nb);
	printf("Enter the number of files : ");
	scanf("%d",&nf);	
	int block_array[nb],new_block_array[nb],files_array[nf],index_array[nb],index[nb];
	printf("Enter the sizes of the each blcok\n");
	for(i=1;i<=nb;i++){
		printf("Enter the Blcok%d size : ",i);
		scanf("%d",&block_array[i]);
		new_block_array[i] = block_array[i];
		index[i] = 0;	
	}
	printf("Enter the sizes of the each Process\n");
	for(i=1;i<=nf;i++){
		printf("Enter the P%d size : ",i);
		scanf("%d",&files_array[i]);
	}
	
	for(i = 1; i <= nb; i++){       
       	for(j = 1; j <= nb-i; j++){          
           	if(block_array[j] < block_array[j + 1]){               
               	temp = block_array[j];
               	block_array[j] = block_array[j + 1];
               	block_array[j + 1] = temp;
            }
        }
    }
    for(i=1;i<=nb;i++){
    	for(j=1;j<=nb;j++){
    		if(block_array[i] == new_block_array[j])
    			index_array[i] = j;
		}
	}
	
	printf("Process\tBlock_no\tFragmentation\n");
	for(i=1;i<=nf;i++){
		file = files_array[i];
		for(j=1;j<=nb;j++){
			if(file < block_array[j] && index[j]==0){
				block_array[j] -= file;
				index[j] = i;
				printf("P%d\t%d\t%d\n",index[j],index_array[j],block_array[j]);
				break;
			}
		}
	}
	
	
}
