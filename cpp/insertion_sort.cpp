#include <bits/stdc++.h>
using namespace std;

void insSort(vector<int> &a){
    int j,n=a.size(),k;
    for(int i=1;i<n;i++){
        k=a[i],j=i-1;
        while(j>=0 && a[j]>k){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
}

int main() {
	int n,e;
	vector<int> a;
	cout<<"Enter length of array: ";
	cin>>n;
	cout<<"Enter elements in array\n";
	for(int i=0;i<n;i++) cin>>e,a.emplace_back(e);
	insSort(a);
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}