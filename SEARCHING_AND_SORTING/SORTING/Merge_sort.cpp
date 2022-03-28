#include<bits/stdc++.h>
using namespace std;
int arr[20];

void merge(int a[], int l, int mid, int r){
	
	int i=l;                   //using it for initialization and going to use it from left or i upto mid;
	int j=mid+1;               //going to use it from mid+1 or j upto r;
	int k=l;
	
	while(i<=mid && j<=r){
		if(a[i]<a[j]){
			arr[k]=a[i];
			i++;
		}else{
			arr[k]=a[j];
			j++;
		}
		k++;
	}
	
	if(i>mid){              // as we are incrementing the value of i after the if condition above in line 14. thats why if i will end the subarray of a[] then we can  fill the values of a[j] in arr[k]
		while(j<=r){
			arr[k]=a[j];
			j++; 
			k++;
		}
	}else{
		while(i<=mid){
			arr[k]=a[i]; //use arr as secondary array and a as primary ones buddhu
		    i++;
		    k++;
		}
	}
	
	for(int x=l;x<=r;x++){
		a[x]=arr[x];
	}
	
}



void merge_sort(int a[],int l, int r){

	if(l<r){
		int mid=((l+r)/2);
		merge_sort(a,l,mid);              // array from left to mid
		merge_sort(a,mid+1,r);            // array from mid+1 to right
		merge(a,l,mid,r);                 // simply merge arrays from left to right with the help of mid and mid+1
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
	merge_sort(a,l,r);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
}
