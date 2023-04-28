/*
12. A College wants to celebrate all degree holder
students to throwing their hats in a predefined way:
First all 25 students have to arranged in a Square
Matrix. First, an upper half of triangle matrix will
throwing hats and then a lower half of triangle matrix
will. Help them to achieve this unique idea by using C++.
*/

#include <iostream>
using namespace std;

int main() {
    int r=5;
    int c=5;
    string matrix[r][c];
    int i,j;
  
    cout << "\nAll students wearing hat :\n\n\n";
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        	matrix[i][j] ="    HAT ";
            cout << matrix[i][j] << "  ";
        }
        cout << "\n\n";
    }
    
    cout << "\nFirst half students are throwing the hat :\n\n\n";
    for(i=0;i<r;i++) {
        for(j=0;j<c-i;j++) {
        	matrix[i][j]="   THROW";
        }
    }
    
     for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << "\n\n";
    }
    
    cout << "\nSecond half students are throwing the hat :\n\n\n";
   
     for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
        	if(matrix[i][j]=="    HAT ")
        	{
        		matrix[i][j]="   THROW";	
			}
        }
    }
    
     for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << "\n\n";
    }
    
}
