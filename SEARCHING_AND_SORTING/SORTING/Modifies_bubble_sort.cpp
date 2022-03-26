#include<bits/stdc++.h>
using namespace std;

void swap(int a[], int k,int l){
	int temp=a[k];
	a[k]=a[l];
	a[l]=temp;
	
}

//modified bubble sort and here time complexity will be O(n^2) in worst case and O(n) in best case:-

void modified_bubble_sort(int a[],int n){
	bool swapped;
	for(int i=0;i<n-1;i++){
		swapped=false;
		
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a,j+1,j);
				swapped=true;
			}
		}
		
		if(swapped!=true){
			break;
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
	
	modified_bubble_sort(a,n);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}
