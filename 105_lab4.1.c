#include<stdio.h>
int main()
{      int n,a,b,c,i,max=0,min=10;

    scanf("%d",&n);
    int sum[n],answer[2000]={};
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        sum[i]=(a*4)+(b*2)+c;
    }

    for(i=0;i<n/3;i++)
    {
        answer[i]=sum[i]+sum[i+1]+sum[i+2];
    }

    for(i=0;i<n/3;i++)
    {
        if(answer[i]>max)
            max=i;
        else if(answer[i]<min)
            min=i;
    }
    printf("%d\n%d",max+1,min+1);





}
