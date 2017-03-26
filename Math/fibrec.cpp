#include <iostream>
using namespace std;

int fibrec(int n)
{   
    if (n == 0) 
    {
        return 0;
    }
    if ( n == 1)
    {
         return 1;
    }
    else
    {
         return (fibrec(n-1) + fibrec(n-2));
    }
}


int main()
{
   int n;
   cout << "Enter the number of terms of the Fibonacci sequence you want:"<<endl;
   cin >> n; 
   cout <<"The first " << n << " Fibonacci numbers "<< " are" <<endl;
   if ( n < 0 )
   {
       return -1; // error, we dont define fibrec(negatives)
   }
   for(int i = 0; i < n; ++i)
   {
        cout << fibrec(i) << ",";
   }
   cout << endl;
    
   return 0;
    
    
}
