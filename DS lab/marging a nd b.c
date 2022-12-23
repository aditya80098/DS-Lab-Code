#include <stdio.h>
int marging(int size, int a[]);
void sort(int size, int a[]);
main()
{
    int i, size1, size2, size, j = 0, k;
    printf("Enter the size of an array1\n");
    scanf("%d", &size1);
    printf("Enter the size of an array2\n");
    scanf("%d", &size2);
    int a[size1], b[size2];
   int  uni[size1 + size2];
    printf("Enter element for array1");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element of array2\n");
    for (i=0; i < size2; i++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<size1;i++)
    {
        uni[j]=a[i];
        j++;
    }
    for(i=0;i<size2;i++)
    {
        uni[j]=b[i];
        j++;
    }
        for(i=0;i<j;i++)
        
        {
            for(k=0;k<j;k++)
        }
}