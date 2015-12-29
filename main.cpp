#include<iostream>
#include"ult.h"

using namespace std;

int main()
{
	string input,output;

	cout<<"Enter you sentence to transform>>"<<endl;
	getline(cin,input);
	output = ULtrans(input);

	cout<<"The result is: "<<endl;
	cout<<output<<endl;
}
