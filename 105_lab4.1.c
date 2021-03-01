#include<stdio.h>
int main()
{      int n,a,b,c;

    scanf("%d",&n);
    int sum[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        sum[i]=a+b+c;
    }

      for(i=0;i<n;i++)
    {
        printf("%d,",sum[i]);
    }






}
