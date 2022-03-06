// Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs

#include<iostream>
#include<cmath>
using namespace std;

void recursive(int a){
	
	if(a<=0){
		return;
	}
	
	recursive(a-1);
	cout<<a<<" ";
	
}

int main(){
	int n;
	cin>>n;
	recursive(n);
	
}