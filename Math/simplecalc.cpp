#include <iostream>
#include <limits>
using namespace std;
 
int main()
{
    int choice;
    float value1, value2, result;

    cout << "CALCULATOR" << endl;
    cout << "By Muki" << endl;
    
    while(true)
{
        cout << "1.Add" << endl
             << "2.Subtract" << endl
             << "3.Multiplication" << endl
             << "4.Divide" << endl
             << "5.Exit" << endl;

        cin >> choice;

        if(choice == 5)
            break;
        cout << "Please enter the first value: ";
        cin >> value1;
        cout << "Please enter the second value: ";
        cin >> value2;

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
            
        
        cout << "The result is: " << result << endl;      
                 


}
    
    return 0;
    
    
}
