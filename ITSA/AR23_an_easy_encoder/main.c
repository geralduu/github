#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()//send nomber and encode
{
#ifndef ONLINE_JUDGE
    freopen("filename.txt", "r", stdin);
#endif
    freopen("test.txt", "r", stdin);
    int i;
    char s[10000];
    while(fgets(s, 10000, stdin))
    {
        for(i=0; i<strlen(s); i++)
        {
            if(isalpha(s[i]))//check it is alpha or number
            {
                if((s[i]>='A' && s[i]+13<='Z') || (s[i]>='a' && s[i]+13<='z'))//if elpah is in a to z printf
                    printf("%c", s[i]+13);
                else //the elpha path 19 will return
                    printf("%c", s[i]+13-26);
            }
            else
                printf("%c", s[i]);
        }
    }
    return 0;
}
