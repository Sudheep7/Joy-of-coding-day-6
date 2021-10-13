#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    char *p;
    int n;
    p=str;
    printf("Enter the string:\n");
    gets(str);
    n=strlen(str);
    printf("The abbreviation of %s is: ",str);
    printf("%c",str[0]);
    for(int i=1;i<n;i++)
    {
        if(*(p+i)==' ')
        printf("%c",str[i+1]);
        continue;
    }
    return 0;
    
}


