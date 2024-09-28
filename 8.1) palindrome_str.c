#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], newStr[20]="", temp;
    int n, i, j=1;
    printf("\nEnter the String: ");
    scanf("%s", &str);

    n = strlen(str);
    strcpy(newStr,str);

    printf("\nOriginal: %s", str);

    for (i=0; i<n; i++)
    {
      newStr[i] = str[n-j];
      j++;
    }
    printf("\nReverse String: %s", newStr);

    if(str==newStr)
      printf("\n\nString(%s) is not palindrome.", str);

    else
      printf("\n\nString(%s) is not palindrome.", str);

    return 0;
}