# include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers seperate them by commas\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b){
        if(b>c)
        printf("%d is the greatest\n", a);
        
    }
    else if (c==a)  
        printf(" multiple numbers are equals\n");
    else if(c>a)
        printf("%d is greater",c);
        else
        printf("%d is greatest \n",b);
        
}