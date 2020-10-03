#include <stdio.h>

void linearSearch(int num,int n,int ar[20]){
    int pos;
    int c = 0;
    for(int i=0;i<n;i++)
    {

        if(ar[i] == num)
        {
            pos = i+1;
            c = 1;
            break;
        }
    }
    if(c == 1)
        printf("Element present at position %d",pos);
    else
        printf("Element not present in the array");
}


int main()
{
    int num, n;
    int ar[20];
    printf("Enter the number to be searched\n");
    scanf("%d", &num);
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    linearSearch(num, n, ar);
    return 0;
}
