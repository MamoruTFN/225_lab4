#include<stdio.h>

int main()
{
    int n,mv[3]={4,2,1},best,b,worst,w;
    scanf("%d",&n);

    int m[n][3],s[n],tys[n-2];
    if(n>3)
    {
        for(int i=0; i<n; i++)
        {
            s[i]=0;
            for(int j=0; j<3; j++)
            {
                scanf("%d ",&m[i][j]);
                s[i]+=m[i][j]*mv[j];
            }
        }
        for (int i=0,j=0;i<n-2;i++,j++)
        {
            tys[j]=s[i]+s[i+1]+s[i+2];
        }
        best=tys[0];
        worst=tys[0];
        for(int i=0;i<n-2;i++)
        {

            if(tys[i]>best)
            {
                best=tys[i];
                b=i;
            }
            if(tys[i]<worst)
            {
                worst=tys[i];
                w=i;
            }
        }
        printf("%d %d",b,w);
    }



    return 0;
}
