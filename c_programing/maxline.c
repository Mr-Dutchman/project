#define maxline 1000
#define EOF 0
main()
{
    int len;
    int max;
    char line[maxline];
    char save[maxline];
    max=0;
    while((len=getline(line, maxline))>0)
        if(len >max){
            max=len;
            copy(line,save);
        }
        if(max>0)
        printf("%s",save);
getline(s, lim);
char S[];
int lim;
{
    int c,i;
    for(i=0; i<lim-1 && (c=getchar())!= EOF && c!='\n';++i)
    s[i]=c;
    if(c =='\n'){
        s[i] =c;
        ++i;
}
    
    s[i]='\0';
    return (i);

    copy(s1, s2);
    char s1[], s2[];
        int i;
        i=0;
        while((s1[i], s2[i])!='\0')
            ++i;

    }
    }