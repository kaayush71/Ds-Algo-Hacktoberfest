#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,j,minIndex,t;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n-1;i++)
    {
        minIndex=i;
        for(j=i;j<n;j++)
        {
            if(a[j] < a[minIndex])
                minIndex=j;
        }
        t=a[i];
        a[i]=a[minIndex];
        a[minIndex]=t;
    }
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
