#include <stdio.h>
int isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    else
        return 0;
}
int countVowel(char s[])
{
    int i = 0, count = 0;

    while(s[i] != '\0')
    {
        if(isVowel(s[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char s[100];
    printf("Nhap chuoi: ");
    gets(s);
    printf("So nguyen am la: %d", countVowel(s));
    return 0;
}