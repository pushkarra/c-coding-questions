#include<iostream>
#include<cmath>
using namespace std;

int sum(int c){
	if(c/10<=0){
		return c;
	}else{
		int r=c%10;
		return r+sum(c/10);
	}
}


int main(){
	
	int c;
	cin>>c;
	int result = sum(c);
	cout<<result;
}