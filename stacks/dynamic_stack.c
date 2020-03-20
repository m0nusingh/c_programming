#include<stdio.h>
#include<stdlib.h>
/* Dynamically growing stack */
struct node {
   int data;
   struct node *next;
};
struct node *top = NULL;

void push(int n){
struct node *temp = malloc(sizeof(struct node));
temp->data = n;
temp->next = top;
top = temp;
}
void pop(){

if(top ==NULL){
printf("\nStack empty ");
}else{
printf("\n Number Popped : %d",top->data);
struct node *temp;
temp = top;
top = top->next;
free(temp);
}
}

void display(void){
struct node *temp;
temp = top;
while(temp!=NULL){
printf("%d=>",temp->data);
temp = temp->next;
}// end while
}

void main(){

int opt, number;

do{
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Display");
printf("\n4.Exit");
printf("\nPlease select (1-4) :");
scanf("%d",&opt);
switch(opt){
case 1:	printf("Enter a number to push :");
	scanf("%d",&number);
	push(number);
	break;
case 2: pop();
	break;
case 3:	display();
	break;
} //end Switch

}while(opt!=4);//end do while

} //end main()
