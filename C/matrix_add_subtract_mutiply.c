/*Matrix addition,subtraction and multiplication Program*/
#include<stdio.h>

void add( int a1[2][2], int a2[2][2]);
void subtract(int a1[2][2], int a2[2][2]);
void multiply(int a1[2][2], int a2[2][2]);

int main()
{
    int arr1[2][2], arr2[2][2];
    int i,j;
    /* take input in both the array */
    printf("Enter first array ");
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ )
            scanf("%d",&arr1[i][j]);}

    printf("Enter second array ");
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ )
            scanf("%d",&arr2[i][j]);}

    add(arr1, arr2);
    subtract(arr1, arr2);
    multiply(arr1, arr2);
     getch();
 }

add(int a1[2][2],int a2[2][2])
{
    int result[2][2];
    int i,j;
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ )
            result[i][j]=a1[i][j]+a2[i][j];
    }
/* Print output matrix*/
    printf("\nAddition of array is  ");
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ )
            printf("%d\t",result[i][j]);
    }
}
subtract(int a1[2][2],int a2[2][2])
{
    int result[2][2];
    int i,j;
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ )
            result[i][j]=a1[i][j]-a2[i][j];
    }
/* Print output matrix*/
    printf("\nSubtraction of array is  ");
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ )
            printf("%d\t",result[i][j]);
    }
}

multiply(int a1[2][2],int a2[2][2])
{
    int result[2][2];
    int i,j,k;
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ ){
            result[i][j]=0;
            for( k=0 ; k<2 ; k++ ){
               result[i][j]+= (a1[i][k]*a2[k][j]);
            }
        }
    }
    /* Print output matrix*/
    printf("\nMultiplication of array is  ");
    for( i=0 ; i<2 ; i++ ){
        for( j=0 ; j<2 ; j++ )
            printf("%d\t",result[i][j]);
    }
}
