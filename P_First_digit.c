#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int fist = n / 1000;
    // int fist = n % 1000;
    if(fist % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}

