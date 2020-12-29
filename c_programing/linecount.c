#define EOF 0
main()
{
    long nc;
    char c;
    nc=0;
    while((c=getchar()) != EOF)
        ++nc;
    printf("%ld\n",nc);

}