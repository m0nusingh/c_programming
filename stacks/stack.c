#include<stdio.h>
/* stack with size 10 */
int a[10];
int top = -1;

void push( int n ){
a[++top] = n;
}

void pop( void) {
if(top == -1){
  printf("\nStack empty"); 
}
else printf("Number popped : %d",a[top--]);
}
void display(void)
{    
    for(int i = 0; i<=top;++i){
  	printf("%d=>",a[i]);
	}
}

void main(){
int opt,number;

while(opt!=4)
{
printf("\n1.Push to the stack");
printf("\n2.Pop from the stack");
printf("\n3.Display the stack");
printf("\n4.Exit");
printf("\n.Your selection (1-4) :");
scanf("%d",&opt);
switch(opt){
case 1 : printf("\nEnter a number :");
	scanf("%d",&number);
	push(number);
	break;
case 2: pop();
	break;
case 3 : display();
	break;
} //end Switch
}//end while
printf("\nProgram terminated\n");
} // end main()
