# include <stdio.h>
int main()
{
   
   int n,m;
    printf("enter any number\n");
    scanf("%d", &n);
    m=n%2;
    if(m==0)
        printf("number is even\n");
    else
        printf("number is not even\n");
}