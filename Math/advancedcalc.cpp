#include <iostream>
#include <limits>
#include <cmath>
#include <cerrno>
#include <cfenv>
#pragma STDC FENV_ACCESS ON
using namespace std;
const double PI = acos(-1);

int main()
{
    int choice;
    float value1, value2, result;
    double x= PI/6; // PI/6 rad = 180 deg/6 = 30 deg
    double y= PI/4; // PI/4 rad = 180 deg/4 = 45 deg
    double z= PI/3; // PI/3 rad = 180 deg/3 = 60 deg
    cout << "TRIG FUNCTION CALCULATOR" << endl;
    cout << "By Muki" << endl;
   
    while(true)
    {
        cout << "1.Add" << endl
             << "2.Subtract" << endl
             << "3.Multiplication" << endl
             << "4.Divide" << endl
             << "5.sin(x)" << endl
             << "6.cos(x)" << endl
             << "7.tan(x)" << endl
             << "8.Exit" << endl;

        cin >> choice;

        if(choice == 8)
            break;
        if(choice < 5)
        {
            cout << "Please enter the first value: ";
	    cin >> value1;
	    cout << "Please enter the second value: ";
	    cin >> value2;
        }
        else
        {
             cout << "Please enter the value of the angle you want to compute trig. functions for in degrees:";
              cin >> value1;
              x = PI*(double)value1/180.0; // convert user input in degrees into radians 
        }

        if(choice == 1)
            result = value1 + value2;
        else if(choice == 2)
            result = value1 - value2;
        else if(choice == 3)
            result = value1 * value2;
        else if(choice == 4)
        {
            if(value2 != 0)
                result = value1 / value2;
            else
                cout << "NOT ALLOWED" << endl;
            double inf = numeric_limits<double>::infinity();
            result = inf;

        }
        else if(choice == 5)
        {
             cout << "Sin(" << value1 <<") = " << sin(x) << endl;         
        }            
        else if(choice == 6)
        {
             cout << "Cos(" << value1 <<") = " << cos(x) << endl;         
        }        
        else if(choice == 7)
        {
             cout << "Tan(" << value1 <<") = " << tan(x) << endl;         
        }     
        if(choice < 5) 
        {  
            cout << "The result is: " << result << endl;
        }      
}
    
    return 0;
    
    
}
