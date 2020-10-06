//About binary search
//A Binary Search is a sorting algorithm, that is used to search an element in a sorted array. 

//Condition for binary search
//A binary search technique works only on a sorted array, so an array must be sorted to apply binary search on the array. 

//Advantages of binary search
//It is a searching technique that is better than the linear search technique as the number of iterations decreases in the binary search.
//It reduces the complexity of program. 

#include<stdio.h>  
int main()
{
int A[100], i, m, n, first, last, mid;
printf("Enter the number of elements of an array:: ");
scanf("%d",&m);

printf("Enter the elements of an array in ascending order::");
for(i=0;i<m;i++)
scanf("%d",&A[i]);

printf("Enter the element to be searched:: ");
scanf("%d",&n);

first=0;                              //assigning lower bound value to zero
last=m-1;                            //assigning upper bound value to length-1 
mid= (first+last)/2;                //finding middle element

 while(first<=last)                 //loop works until lower bound is less than and equals to upper bound
  {
   if(A[mid]<n)                     //If the element is greater than the middle element then it can be present in the left subarray
    {
     first=mid+1;
    }
   else if(A[mid]==n)               // else if the element is present at the middle itself
    {
     printf("Searched Element %d is found in the array at position %d." ,n,mid+1);
     break;
    }
   else
     last=mid-1;                    //else the element is only present in the right subarray
     mid=(first+last)/2;

  }
  if(first>last)                     //when element is not present in the array
  printf("Sorry!!....Element does not exist in the array.");
  return 0;
  }
