#include<iostream>
#include<vector>

using namespace std;



int main()
{
	string input;

	cout<<"Enter your sentence to transform>>"<<endl;
	getline(cin,input);

	cout<<"The original sentence: "<<input<<endl;

	char r;
	int ascii='a'-'A';
	string output;

	for(int i=0;i<(int)input.length();i++)
	{
		r=input.at(i);

		if('a'<=r && r<='z')
		{
			output.push_back(r-ascii);
		}
		else if('A'<=r && r<='Z')
		{
			output.push_back(r+ascii);
		}
		else
		{
			output.push_back(r);
		}
	}

	cout<<output<<endl;

}
