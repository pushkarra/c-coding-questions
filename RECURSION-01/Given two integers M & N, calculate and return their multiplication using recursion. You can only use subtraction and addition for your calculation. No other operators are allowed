#include<iostream>
using namespace std;

int mul(int a, int b){
	if(b<=0){
		return 0;
	}else{
		return a+mul(a,b-1);
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	int result=mul(a,b);
	cout<<result;
	return 0;
}