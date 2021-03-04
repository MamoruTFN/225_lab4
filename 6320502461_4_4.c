#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char sentence[1000] , acronym[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *a;
    int i=0,k=0;
    scanf("%[^\n]s",sentence);
    a=strtok(sentence," ");
    while(a!=NULL)
    {
        for(int j=0;j<11;j++)
            if(strcmp(a,acronym[j]))
                k++;
        if(k==11||i==0)
            printf("%c",toupper(a[0]));
            a=strtok(NULL," ");
            i++;
             k=0;
    }

    return 0;
}
