#include<stdio.h>
int main()
{
    int row, col,n;
    printf("Enter Your Range: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
        if(row==1 || col==1 || col== n || row== n || row==col || row+col==n+1 || row==n/2 || col==n/2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
