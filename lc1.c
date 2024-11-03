#include<stdio.h>
void main()
{
    int n,num[100],i,j,x,t;

    printf("Enter the number of inputs : ");
    scanf("%d",&n);

    printf("Target = ");
    scanf("%d",&t);

    for(x=0;x<n;x++)
    {
        printf("Enter the number %d : ",x+1);
        scanf("%d",&num[x]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(num[i]+num[j]==t)
            {
                printf("%d,%d" ,i,j);
            }
        }
    }
}