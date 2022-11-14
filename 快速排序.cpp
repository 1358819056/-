#include <stdio.h>
void quick_sort(int b[],int l,int r);
void swap(int *a,int *b);
int main(){
	int a;
	scanf("%d",&a);
	int b[a];
	for(int i=0;i<a;i++)scanf("%d",&b[i]);
	quick_sort(b,0,a-1);
	for(int i=0;i<a;i++)printf("%d ",b[i]);
} 
void quick_sort(int b[],int l,int r){
	if(l>=r){return;
	}
	int x=b[(l+r)/2],i=l-1,j=r+1;
	while(i<j){
		do {i++;} while(b[i]<x);
		do {j--;} while(b[j]>x);
		if(i<j) swap(&b[i],&b[j]);
		
	}
	quick_sort(b,l,j);
	quick_sort(b,j+1,r);
}
void swap(int *a,int *b){
	int temp =*a;
	*a=*b;
	*b=temp;
}
