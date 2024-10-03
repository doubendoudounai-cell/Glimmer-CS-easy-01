#include <stdio.h>

int main()
{
    int m,n,r;

    printf("Enter two numbers:\n");
    scanf ("%d%d",&m, &n);

    while(n!=0){
        r = m%n;
        m=n;
        n=r;
    }

    printf("最大公约数为:%d\n",m);

    return 0;

    
}