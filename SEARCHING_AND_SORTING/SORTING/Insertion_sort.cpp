#include<bits/stdc++.h>
using namespace std;

//void swap(int a[], int k,int l){
//	int temp=a[k];
//	a[k]=a[l];
//	a[l]=temp;
//	
//}

// always remeber the array is starting from 1 and end upto <=n-1; also we are using while loop inside the for loop
// and we are doing the a[j+1]=demo because of j-- used in while loop j value is now decresed to j-1 as of original value.
// and no need to perform additional swap function prtoperties here because that work we can do by ourself

void insertion_sort(int a[],int n){
	
	for(int i=1;i<=n-1;i++){
		int demo=a[i];
		int j=i-1;
		
		while(j>=0 && a[j]>demo){
			a[j+1]=a[j];
			j--;
		}
		
		a[j+1]=demo;
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
	
	insertion_sort(a,n);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}
