#include<stdio.h>

void insertion_sort(int *a,int n){

int i,j,key;

for( j= 1;j<n;++j){

key = a[j];
i = j-1;
while(i>=0&&a[i]>key){
a[i+1] = a[i];
i =i-1;
}
a[i+1] = key;
}

}

void main(){
int a[10],n,i;

printf("\nEnter number of elements : ");
scanf("%d",&n);
printf("\nEnter the elements now ");

for(i=0;i<n;++i){
	scanf("%d",&a[i]);
}
insertion_sort(a,n);

printf("\nArray after sorting \n");
for(i=0;i<n;++i){
printf("%d ",a[i]);
}
printf("\nProgram terminated !! \n");


}
