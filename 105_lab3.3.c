#include<stdio.h>
#include<string.h>
int main()
{   char a[200],an[200];
    int b,i=0;

    scanf("%s",a);
    b=strlen(a);
    //printf("%d",b);
    while(i<b)
    {
        if(a[i-1]!=a[i])
        {
            printf("%c",a[i]);
        }
        i++;

    }




}
