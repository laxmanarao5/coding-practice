#include<stdio.h>
#define MAX 5

int stack[MAX],choice,top=-1,item,i;

void display(int stack[]){
	for(i=0;i<MAX;i++){
		printf("stack[%d] = %d\n",i,stack[i]);
	}
}

void Producer(){
	if(top==MAX-1){
		printf("Warning :  Stack is full\nYou cannot Produce Items");
	}
	else{
		printf("Enter the Item : ");
		scanf("%d",&item);
		top++;
		stack[top] = item;
		display(stack);
	}
}
void Consumer(){
	if(top==-1){
		printf("Warning : Stack is Empty\nYou cannot Consume items");
	}
	else{
		stack[top] = 0;
		top--;
		display(stack);
	}
	
	
}


int main(){
	printf("Operations on Producer and Consumer Problem\n");
	printf("1 for Producer\n2 for Consumer\n3 for Exit");
	do{
		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				Producer();
				break;
			case 2:
				Consumer();
				break;
			default:
				printf("Enter valid choice");
		}
	}while(choice!=3);
	return 0;
}
