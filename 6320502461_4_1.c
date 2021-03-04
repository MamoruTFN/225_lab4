#include <stdio.h>


int main()
{
    int n,mv[3] = {4,2,1},max,min;

    scanf("%d",&n);

    int m[n][3],s[n],tys[n-2],best,worst=0;

    for(int i=0; i<n; i++)
    {
        s[i] = 0;
        tys[i] = 0;
        for(int j=0; j<3; j++)
        {
            scanf("%d",&m[i][j]);
            s[i] += (m[i][j]*mv[j]);
        }
    }
    for(int i=0,j=0; i<n-2; i++,j++)
    {
        tys[j] += s[i]+s[i+1]+s[i+2];
    }

    max = tys[0];
    best = 1;
    min = tys[n-3];
    worst = n-2;

        for(int i=1; i<n-2; i++)
        {
            if(max<tys[i])
            {
                max = tys[i];
                best = i+1;
            }
            if(min>tys[i])
            {
                min = tys[i];
                worst = i+1;
            }
        }

    printf("%d %d",best,worst);

    return 0;


}
