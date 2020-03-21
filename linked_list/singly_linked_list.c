#include<stdio.h>
#include<stdlib.h>
struct node {

int data;
struct node *next;
};
struct node *start = NULL;
void insertb(int num){
struct node *new = malloc(sizeof(struct node));
new->data = num;
new->next = start;
start = new ;
}
void inserte(int num){
struct node *new  =malloc(sizeof(struct node));
new->data = num;
new->next =NULL;

if(start ==NULL){
	start = new;
}
else{

	struct node *temp;
	temp = start;
	while(temp->next !=NULL){
		temp = temp->next;
	}
	temp->next = new;
}
}

void display(){
	printf("\n");
	struct node *temp = start;
	while(temp!=NULL){
		printf("%d=>",temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void deleteb(void){
	if(start==NULL){
		printf("\nList empty");
	}
	else{
		struct node *temp = start;
		start = start->next;
		free(temp);
	}
}

void deletee(void){
	if(start ==NULL){
		printf("\nList empty");
	}
	else{
		struct node *temp = start,*last;
		while(temp->next->next!=NULL){
			temp= temp->next;
		}
		last = temp->next;
		temp->next = NULL;
		free(last);
	}
}

void insertat(int pos,int num){
	struct node *new = malloc(sizeof(struct node)),*temp=start;
	new->data = num;
	new->next = NULL;
	if(start == NULL){
		printf("\nList empty");
	}else{
	while(pos!=2&&temp->next!=NULL){
 		pos--;
		temp=temp->next;
	}
	new->next = temp->next;
	temp->next= new;
 	}
		
}


void main(){

int opt,number,pos;


do{

printf("\n1.Insert at the front");
printf("\n2.Insert at the end ");
printf("\n3.Delete from start");
printf("\n4.Delete from end");
printf("\n5.Insert at position");
printf("\n6.Delete from position");
printf("\n7.Display Linked list");
printf("\n8.Exit");
printf("\nSelect your option (1-8) : ");
scanf("%d",&opt);
switch(opt){
	case 1:	printf("\nEnter a number ");
		scanf("%d",&number);
		insertb(number);
		break;
	case 2:	printf("\nEnter a number ");
		scanf("%d",&number);
		inserte(number);
		break;
	case 3: deleteb();
		break;
	case 4:	deletee();
		break;
	case 5:	printf("\nEnter position");
		scanf("%d",&pos);
		printf("\nEnter the number ");
		scanf("%d",&number);
		insertat(pos,number);
		break;
	case 6: printf("\nEnter position");
		scanf("%d",&pos);
	//	deleteat(pos);
		break;
	case 7: display();
		break;
}//end switch

}while(opt!=8);
printf("\nProgram Terminated!! \n");
} //end main(
