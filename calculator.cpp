#include<iostream.h>
void main()
{
	float a,b,result;
	char op;
	cout<<"\nSimple Calculator";
	cout<<"\nEnter a :";
	cin>>a;
	cout<<"\nEnter b :";
	cin>>b;
	cout<<"\nEnter the operation: +,-,*,/ :";
	switch(op)
	{
		case '+': result=a+b;
				cout<<"\nSum of a and b is"<<result;
				cout<<endl;
				break;
		case '-':result=a-b;
				cout<<"\nDifference of a and b is"<<result;
				cout<<endl;
				break;
		case '*':result=a*b;
				cout<<"\nProduct of a and b is"<<result;
				cout<<endl;
				break;
		case '/':result=a/b;
				cout<<"\nDivision of a and b is"<<result;
				cout<<endl;
				break;
	}
}
			