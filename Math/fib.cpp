#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter the maximum number up to which you want to generate fibonacci numbers:"<<endl;
   cin >> n;
    int first=0, second=1, third;
    cout <<"The first " << n << " Fibonacci numbers "<< " are" <<endl;
    
    for(int i=0; i < (n-1); i++)
    {
        if (i == 0)
        {
             cout << first << "," << second << ",";
        }
        else
        {
             third = first + second;
             first = second;
             second = third;
             cout << third << ",";
         }

    }
    cout << endl;
    return 0;
    
    
}
