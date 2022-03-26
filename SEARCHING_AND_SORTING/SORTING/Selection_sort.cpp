#include<bits/stdc++.h>
using namespace std;

void swap(int a[], int k,int l){
	int temp=a[k];
	a[k]=a[l];
	a[l]=temp;
	
}

void selection_sort(int a[],int n){
	for(int i=0;i<n;i++){
		int small=i;
		int j=i+1;
		
	    for(j;j<n;j++){
	    	if(a[j]<a[small]){   //remeber we are searching for number smaller than a[smaller]. thats why we use > sign.
	    		small=j;
			}
		}
		
		if(small!=i){
			swap(a,i,small);
		}
	}
	
}


int main(){
	int n,i;

	cout<<"enter the size of the array ";
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	selection_sort(a,n);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}
