#include<stdio.h>
int main()
{
    int i,j,n;
    scanf(“%d”,&n);
    for(i=0;i< n;i++)
    {
        for(j=0;j< n;j++)
        {
            if(j< n-i-1)
                printf(“*”);
            else
               printf(“.”);
        }
        for(j=0;j< n-1;j++)
        {
            if(j< i)
                printf(“.”);
            else
                printf(“*”);
        }
        printf(“\n“);
    }

 for(i=2;i<=n;i++)
    {
     for(j=0;j< n;j++)

        {
            if(j< i-1)
                printf(“*”);
            else
                printf(“.”);

        }
      for(j=0;j< n-1;j++)
            {
                if(j< n-i)
                   printf(“.”);
                else
                    printf(“*”);
            }
            printf(“\n“);
    }
    return 0;
}
