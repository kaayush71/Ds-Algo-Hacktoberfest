//Author: D Vishal Redduy
//The following program can be used to find out the Fibonacci Series.
#include<iostream>     
using namespace std;     
int main()
{
    int n,first = 0, second = 1, next;     
    cout << "Enter the number of terms of Fibonacci series you want" << endl;
    cin >> n;     
    cout << "First " << n << " terms of Fibonacci series are :" << endl; 
    for (int i = 0 ; i < n ; i++ )
    {
        if ( i <= 1 )
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }     
    
}