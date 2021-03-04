#include<stdio.h>
#include<string.h>

int main()
{
    char sentence[100];
    int n,x[4],tmp,tmp1;
    scanf("%d",&n);
    x[0] = 1;
    for(int i=0; i<n; i++)
    {
        x[0] = 1;

        scanf("%s",sentence);
        for(int j=0; j<strlen(sentence); j++)
        {
            if(sentence[j]=='A')
            {
                tmp = x[1];
                x[1] = x[2];
                x[2] = tmp;
            }
            else if(sentence[j]=='B')
            {
                tmp = x[0];
                x[0] = x[3];
                x[3] = tmp;
            }
            else if(sentence[j]=='C')
            {
                tmp = x[0];
                x[0] = x[2];
                x[2] = tmp;
                tmp1 = x[1];
                x[1] = x[3];
                x[3] = tmp1;
            }
            else if(sentence[j]=='D')
            {
                tmp = x[0];
                x[0] = x[1];
                x[1] = tmp;
                tmp1 = x[2];
                x[2] = x[3];
                x[3] = tmp1;
            }
            else if(sentence[j]=='E')
            {
                tmp = x[0];
                x[0] = x[3];
                x[3] = tmp;
                tmp1 = x[2];
                x[2] = x[1];
                x[1] = tmp1;
            }
        }

        for(int j=0; j<4; j++)
        {
            if(x[j]==1)
            {
                printf("%d\n",j+1);
            }
            x[j] = 0;
        }
    }
    return 0;
}
