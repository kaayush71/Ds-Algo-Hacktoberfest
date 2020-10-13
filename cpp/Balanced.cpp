#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool Balanced(string exp)
{
	stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			
		if(S.empty() || !ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	if(S.empty()){
		return true;
	}
	else{
		return false;
	}
}

int main()
{

	string expression;
	cout<<"Enter an expression:  "; 
	cin>>expression;
	if(Balanced(expression))
		cout<<"Yes\n";
	else
		cout<<"No\n";
}
