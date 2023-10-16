#include<stdio.h>
int STK[100], TOP = -1, i, n, x, choice;
void Push();
void Pop();
void Peep();
void Display();
void main(){
	printf("Welcome to the implementation of stack using array\n");
	printf("Enter the size of the stack(maximum size = 100)\n");
	scanf("%d",&n);
	
	do
	{	
		printf("Stack option available:\n");
		printf("1.Push \t2.Pop \t3.Peep \t4.Display\t5.exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				Push();
				break;
			case 2:
				Pop();
				break;
			case 3:
				Peep();
				break;
			case 4:
				Display();
				break;
			case 5:
				printf("Exit:The program finished\n");
				break;
			default:
				printf("You have entered wrong choice\n");
				break;
		}
	}while(choice!=5);	
}
void Push(){
	if(TOP>=n-1){
		printf("Stack overflow\n");
	}
	else{
		printf("Enter the element to add\n");
		scanf("%d",&x);
		TOP++;
		STK[TOP] = x;
	}
}

void Pop(){
	if(TOP<0){
		printf("Stack underflow\n");
	}
	else{
		printf("The popped element is : %d\n",STK[TOP]);
		TOP--;
	}
}

void Peep(){
	printf("Enter the position of the element from the top which you want to peep\n");
	scanf("%d",&i);
	if(TOP-1+1<0){
		printf("Stack underflow on peep\n");
	}
	else{
		printf("The %d element from the top is : %d\n",i,STK[TOP-i+1]);
	}
}

void Display(){
	if(TOP<0){
		printf("The stack is empty\n");
	}
	else{
		printf("The element in the stack are:\n");
		for(i = TOP ; i > -1 ; i--){
			printf("%d\n",STK[i]);
		}
	}
}
