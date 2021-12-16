#include<stdio.h>

int main ()
{
    char c[101];
    int i,n,y,j,count=0;

    scanf("%d",&n);
    fflush(stdin);

    for(i=0;i<n;i++)
    {
        scanf("%s",&c);
        y=strlen(c);

        for(j=0,count=0;j<y;j++)
        {
            if(c[j] == '0' || c[j] == '6' || c[j] == '9')
                count+=6;
            else
            if(c[j] == '1' )
                count+=2;
            else
            if(c[j] == '2' || c[j] == '3' || c[j] == '5' )
                count+=5;
             else
            if(c[j] == '4')
                count+=4;
             else
            if(c[j] == '7' )
                count+=3;
            else
            if(c[j] == '8' )
                count+=7;
        }
        printf("%d leds\n",count);
    }
    return 0;
}
