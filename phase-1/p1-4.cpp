/*4.two classmates wants to exchange their seating with each other .
but the prolem is that are only two chair in the small 
classroom which already aquires by them.
write a c++ program which provides a solution for this particular problem*/
#include<iostream>
using namespace std;

main(){
	
	string chair1="student1";
	string chair2="student2";
	string space;

	cout<<"Seating befor exchange"<<endl;
	cout<<"chair 1 :- "<<chair1<<endl;
	cout<<"chair 2 :- "<<chair2<<endl<<endl;	
	
	space=chair1;
	chair1=chair2;
	chair2=space;
	
	cout<<"Seating after exchange"<<endl;
	cout<<"chair 1 :- "<<chair1<<endl;
	cout<<"chair 2 :- "<<chair2<<endl;
	
}
