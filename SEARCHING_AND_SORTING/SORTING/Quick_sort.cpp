#include<bits/stdc++.h>
using namespace std;

void swap(int a[], int k,int l){
	int temp=a[k];
	a[k]=a[l];
	a[l]=temp;
	
}

int partition(int a[], int l, int r){
	int pivot = a[l];
	int i=l;
	int j=r;
	
	while(i<j){
		
		while(a[i]<=pivot){
			i++;
		}
		while(a[j]>pivot){  //it will always > not >=   
			j--;
		}
		
		if(i<j){
			swap(a,i,j);
		}
	}
	
	swap(a,j,l);
	return j;
}

void quick_sort(int a[],int l, int r){
	if(l<r){
		int pivot = partition(a,l,r);
		quick_sort(a,l,pivot-1);
		quick_sort(a,pivot+1,r);
	}
}



int main(){
	int n,i,l,r;

	cout<<"enter the size of the array ";
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	l=0;
	r=n-1;
	quick_sort(a,l,r);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}
