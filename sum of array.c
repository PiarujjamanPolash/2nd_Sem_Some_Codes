#include <stdio.h>

int sum(int *arr , int n)
{
   int i=0,sum=0;

   for(i=0; i<9 ; i++)
   {
       sum = sum + arr[i];
   }

   return sum;
}

int main()
{
    int total = 0;
    int array[10];
    for(int i=0; i<9; i++)
    {
        scanf("%d", &array[i]);
    }

    total = sum(array,9);

    printf("\n%d\n",total);

    return 0;
}

