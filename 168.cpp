#include<iostream>
using namespace std;
string convertToTitle(int x){
	string temp="";
	while(x){
		x--;
		temp = (char)(x%26 + 'A') + temp;
		x/=26;
	}
	return temp;
}
int main(){
	int n;
	cin>>n;
	cout<<convertToTitle(n);
	return 0;
}
