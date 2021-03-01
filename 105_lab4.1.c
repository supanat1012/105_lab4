#include<stdio.h>
int main()
{      int n,a,b,c,i;

    scanf("%d",&n);
    int sum[n],answer[2000]={};
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        sum[i]=(a*4)+(b*2)+c;
    }

    for(i=0;i<n;i++)
    {
        answer[i]=sum[i]+sum[i+1]+sum[i+2];
    }
    for()
    {

    }






}
