#include<stdio.h>
#include<math.h>
int main()
{
    int i, sum=0;
    int arr[4] = {4,5,6,7};

    for(i=0; i<=3 ;i++)

        sum=sum+arr[i];

    printf("%d",sum);

    return 0;
}
