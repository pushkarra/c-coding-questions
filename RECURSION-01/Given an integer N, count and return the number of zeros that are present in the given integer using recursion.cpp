#include<iostream>
using namespace std;

int zeroes(int a){
	if(a<=0){
		return 0;
	}else{
		int c=a%10;
		int r=a/10;
		if(c==0){
		  return 1+zeroes(r);
		}
	    return zeroes(r);
	}
}

int main(){
	int a,b=0;
	cin>>a;
	int result=zeroes(a);
	cout<<result;
	return 0;
}