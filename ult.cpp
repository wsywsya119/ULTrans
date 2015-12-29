#include<iostream>
#include"ult.h"

using namespace std;

string ULtrans(string input)
{

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

	return(output);
}

