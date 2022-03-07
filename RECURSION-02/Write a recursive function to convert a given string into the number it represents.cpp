// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")

// Output format :
// Corresponding integer N (int, Eg. 1234)

// Constraints :
// 0 <= |S| <= 9
// where |S| represents length of string S.

// Sample Input 1 :
// 1231

// Sample Output 1 :
// 1231

#include<bits/stdc++.h>
using namespace std;

int convert(char str[]){
	int a= strlen(str);
	if(a==1){
		return (str[0] - '0');
	}
	
	double y=convert(str+1);
	
	double x=str[0]-'0';
	
	x=x*pow(10,a-1)+y;
	
	return int(x);
}


int main(){
	char str[100];
	cin.getline(str,100);
	int result =convert(str);
	cout<<result<<endl;
}