#include <stdio.h>
int main()
{
char c;
int isLowercaseVowel, isUppercaseVowel;
scanf("%c",&c);
isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
isLowercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (isLowercaseVowel || isUppercaseVowel)
printf("vowel c");
else
printf("consonant c");
return 0;
}
