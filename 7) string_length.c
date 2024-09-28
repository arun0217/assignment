#include<stdio.h>

int main()
{
    char str[20]="", i, count=0;
    printf("\nEnter the String: ");
    scanf("%s",&str);

    for(i=0; i<20; i++)
    {
        if(str[i]!='\0')
          count++;
    }
    printf("\nLength of %s is:  %d",str,count);
    return 0;
}