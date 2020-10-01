#include <iostream>
using namespace std;
void merge(int a[], int l, int m, int h)
{
    int i, j, k, c[50];
    i = l;
    k = l;
    j = m + 1;
    while (i <= m && j <= h) {
        if (a[i] < a[j]) {
            c[k] = a[i];
            k++;
            i++;
        }
        else  {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= m) {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= h) {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = l; i < k; i++)  {
        a[i] = c[i];
    }
}

void mergesort(int a[],int l,int h){
    int m = l+(h-l)/2;
    if(l>=h){
        return;
    }
    mergesort(a,l,m);
    mergesort(a,m+1,h);
    merge(a,l,m,h);

}

int main() {
    int arr[]={2,1,44,6,3};
    int size= sizeof(arr)/sizeof(arr[0]);
    
    mergesort(arr,0,size-1);
    for(int s=0;s<size;s++){
        cout<<arr[s]<<' ';
    }
}
