/*1. WAP to create a Message class with a constructor that takes a single string with a default value. 
Create a private member string, and in the constructor simply assign the argument string to your internal string.
 Create two overloaded member functions called print( ): 
 one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument, 
 which it prints in addition to the internal message.
*/

#include<iostream>
using namespace std;

class Message{
	string a="I love cricket";
	
	public :
		Message()
		{
			cout<<a;
		}
		Message(string s)
		{
			cout<<a<<endl;
			cout<<s;
		}
};

main()
{
	string s;
	Message m;
	cout<<"\nEnter your massage "<<s<<endl;
	cin>>s;
	Message m1(s);
	
}
