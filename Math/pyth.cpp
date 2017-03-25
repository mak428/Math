#include <iostream>
using namespace std;
#define Max(a,b) (a) > (b)? (a) : (b)

int main()
{
    int a, b, c;
Start:
    cout << "Enter any three positive integers representing a triangle" << endl; 
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    cout << "Enter c:" << endl;
    cin >> c;
    
    int largest = Max(a,b);
    largest     = Max(largest, c);
    // Triangle inequality:largest must be strictly less than sum of the two smaller sides:
    if(largest>(a+b))
    {
        cout << "Oops! These numbers do not form a triangle! Try again" << endl;
        goto Start;
    }
    else 
    {
        if((largest*largest) == ((a*a)+(b*b)))
    	    cout << "Congratulations! Your numbers form a pythagorean triplet!" << endl;
        else
	{
            cout << "Oops! Not a pythagorean triplet! Try again." << endl;
            goto Start;
        }

    }  
#if 0
    for(int i=0; i<N; i++)
    {
      myArray[i] = i+1;  // we add 1 to fill the array starting with 1 upto N
      sum+=myArray[i];
    }

    // Gauss's method to add all consecutive integers from 1 to N:
    int gauss_sum = 0;
    gauss_sum = N*(N + 1)/2;

    cout <<"sum= "<< sum << " Gauss's formula sum = " << gauss_sum << endl;
#endif
    return 0;
}
