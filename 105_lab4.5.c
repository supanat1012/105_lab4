#include<stdio.h>
#include<string.h>
int main()
{   int n,i,j,z;
    char a[50],x[4]={1,0,0,0};

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]==A)
            {
                z=x[1];
                x[1]=x[2];
                x[2]=z;
            }
            else if(a[j]==B)
            {
                z=x[0];
                x[0]=x[3];
                x[3]=z;
            }
            else if
        }



    }







}
