#include <iostream>
using namespace std;
//#define N 10000

int main()
{
    int N;

    int sum=0;

    cout << "Enter the value of N (how many numbers you want to add)" << endl;
    cin >> N;
    int myArray[N]; 

    for(int i=0; i<N; i++)
    {
      myArray[i] = i+1;  // we add 1 to fill the array starting with 1 upto N
      sum+=myArray[i];
    }

    // Gauss's method to add all consecutive integers from 1 to N:
    int gauss_sum = 0;
    gauss_sum = N*(N + 1)/2;

    cout <<"sum= "<< sum << " Gauss's formula sum = " << gauss_sum << endl;
    return 0;
}
