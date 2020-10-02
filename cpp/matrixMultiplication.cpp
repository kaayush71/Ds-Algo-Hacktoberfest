#include <iostream>  
using namespace std;  
int main()  
{  
int a[10][10],b[10][10],product[10][10],r,c,i,j,k;    
cout<<"Enter the number of rows:";    
cin>>r;    
cout<<"Enter the number of columns:";    
cin>>c;    
cout<<"Enter the first matrix elements:\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix elements:\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiplication of the matrices:\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
product[i][j]=0;    
for(k=0;k<c;k++)    
{    
product[i][j]+=a[i][k]*b[k][j];    
}    
}    
}       
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<product[i][j]<<" ";    
}    
cout<<"\n";    
}    
return 0;  
}    