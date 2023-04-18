/*
1. WAP to create a Message class with a constructor that takes a single string with a default value. 
Create a private member string, and in the constructor simply assign the argument string to your internal string. 
Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, 
and one that takes a string argument, which it prints in addition to the internal message.
*/

#include<iostream>
using namespace std ;

class Message{
	
	string a1="I love cricket" ;
	
	public :
		
		Message()
		{
			cout<<endl<<a1 ;			
		}
		
		Message(string a2)
		{
			cout<<endl<<a1 ; 
			cout<<endl<<a2 ;
		}
	
};

main()
{
	string s;
	Message m ;
	cout<<"\nEnter your massage : "; cin>>s;
	cout<<endl;

	Message m2(s);
}
