#include <stdio.h>

void swap(int *a,int *b) {

    int t;
     t   = *a;
    *a   = *b;
    *b   =  t;
}

int main() {

    int num1,num2;

    scanf("%d %d",&num1, &num2);

    swap(&num1,&num2);

    printf("%d %d\n",num1,num2);

    return 0;
}
