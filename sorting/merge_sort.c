#include<stdio.h>



void merge(int *a,int x, int middle, int y){
int  i= x,j=middle+1, k= x;
int king[20];
while(i<=middle&&j<=y){
if(a[i]<a[j]){
 king[k]=a[i];
  k++;i++;
}
else{
king[k]= a[j];
k++;j++;
}
} //end while
if(i<=middle)
for(;i<=middle;++i){
king[k] = a[i];
k++;
}

if(j<=y)
for(;j<=y;++j){
king[k]=a[j];
k++;
}
for(i=x;i<=y;++i){
a[i]=king[i];
}
}

void merge_sort(int *a,int x, int y){
int middle = (x+y)/2;
if(x<y){
	merge_sort(a,x,middle);
	merge_sort(a,middle+1,y);
	merge(a,x,middle,y);
}
}


void main(){
int a[20],n,i;
printf("\nEnter number of elements :" );
scanf("%d",&n);

for(i=0;i<n;++i){
scanf("%d",&a[i]);
}

merge_sort(a,0,n-1);
printf("\nSorted array\n");
for(i=0;i<n;++i)
printf("%d ",a[i]);

}
