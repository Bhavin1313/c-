/*
10. Help Martin to solve a special kind of puzzle by
designing a C++ system. Total 25 random numbers arranged
in a form of Square Matrix. To solve that puzzle, he has
to find addition of all diagonally aligned numbers on
puzzle cardboard.
*/

#include <iostream>
using namespace std;

class Puzzle{
    int matrix[5][5];
    int sum=0;
    int i,j;
    
    public :
    	void input()
    	{
    		for(i=0;i<5;i++) {
        		for(j=0;j<5;j++) {
            		cout<<"Enter the random number a["<<i+1<<"]["<<j+1<<"] : ";
					cin>>matrix[i][j];		
						if(i==j)
						{
							sum=sum+matrix[i][j];
						}
        			}
    			}
		}
		
		void output()
		{
			
			cout << "\nOriginal Matrix:\n\n\n";
			cout<<"    --------------------\n";
        	for(i=0;i<5;i++) {
        		
        		
        		cout<<"\n   |  ";
        		for(j=0;j<5;j++) {
            		cout << matrix[i][j] << "  ";
        		}
				cout<<"   |";
				
    		}
    		cout<<"\n   --------------------\n";
    
    		cout<<"\n\nThe sum of all diagonally aligned numbers on puzzel cardboard is : "<<sum;
		}
};

main()
{
	Puzzle p;
	p.input();
	p.output();
}
