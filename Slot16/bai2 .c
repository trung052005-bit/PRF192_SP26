#include <stdio.h>
int isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    return 0;
}
int countVowel(char *s)
{
    int count = 0;
    char *p = s;
    while(*p != '\0')
    {
        if(isVowel(*p))
            count++;
        p++;
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