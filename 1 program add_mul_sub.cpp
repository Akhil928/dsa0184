 #include<iostream>
using namespace std;
int main(){
	int num1,num2,add,sub,mul;
	float div;
	cout<<"enter the two numbers";
	cin>>num1>>num2;
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/(float)num2;
	cout<<endl<<"sum="<<add;
	cout<<endl<<"difference="<<sub;
	cout<<endl<<"multiplication="<<mul;
	cout<<endl<<"division="<<div;
	
	return 0;
	
}
