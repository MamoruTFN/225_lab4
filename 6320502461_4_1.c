#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][3];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }


    return 0;
}
