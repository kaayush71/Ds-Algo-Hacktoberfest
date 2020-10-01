/*
Code by Urjita Sharma
Given a non-empty array of integers, every element appears twice except for one. Find that single one.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;
    }

int main() {
cout<<"Enter length of array "<<endl;
int n; cin>>n;

vector<int> arr(n,0);
cout<<"Enter numbers in array "<<endl;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr[i]=x;
}
cout<<"Single element is - "<<singleNumber(arr)<<endl;

}
