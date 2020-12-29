#include <stdio.h>
# define EOF (-1)
int main()
{
long nc;
int c;
nc=0;
while((c=getchar())!=EOF)
    ++nc;
printf("%ld\n", nc);
}