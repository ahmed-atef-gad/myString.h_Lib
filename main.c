#include "mystring.h"
#include <stdio.h>

int main() {
    
    /*
    //// TEST myMemset Function

    char name[30] = {"------------------------------"};
    printf("%s\n",name);
    myMemset(name,'*',30);
    printf("%s\n",name);
    */

    /*
    //// TEST myMemCPY Function

    char name1[30] = {"------------------------------"};
    char name2[30] = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    printf("%s\n",name1);
    printf("%s\n",name2);
    myMemcpy(name1,name2,9);
    printf("%s\n",name1);
    */

    /*
    //// TEST myMemcmp Function

    int num1[5] = {1, 2, 3, 4, 5};
    int num2[5] = {1, 2, 3, 4, 5};
    int cmpState = myMemcmp(num1,num2,5);
    printf("%i\n",cmpState);
    */

    /*
    //// TEST myMemchr Function

    const char str[] = "https://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;
    ret = myMemchr(str, ch, strlen(str));
    printf("String after |%c| is - |%s|\n", ch, ret);
    */

    /*
    //// TEST myMemmove Function

    char name1[11] = {"Ahmed Atef"};
    printf("%s\n",name1);
    myMemmove(name1+3,name1, 5*sizeof(char));
    printf("%s\n",name1);
    */

    /*
    //// TEST myStrlen Function

    char str[50] = "This is tutorialspoint.com";
    int len;

    len = myStrlen(str);
    printf("Length of |%s| is |%d|\n", str, len);
    */

    /*
    //// TEST myStrcat Function

    char src[50] = {"This is source"};
    char dest[50] = {"This is destination"};
    myStrcat(dest, src);

    printf("Final destination string : |%s|", dest);
    */

    /*
    //// TEST myStrncat Function

    char src[50] = {"This is source"};
    char dest[50] = {"This is destination"};
    myStrncat(dest, src, 15);
    printf("Final destination string : |%s|", dest);
    */

    /*
    //// TEST myStrchr Function

    const char str[] = "https://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;
    ret = myStrchr(str, ch);
    printf("String after |%c| is - |%s|\n", ch, ret);
    */

    /*
    //// TEST myStrcmp Function

    char str1[15] = "abcdef";
    char str2[15] = "ABCDEF";
    int ret;
    ret = myStrcmp(str1, str2);

    if(ret < 0) {
       printf("str1 is less than str2");
    } else if(ret > 0) {
       printf("str2 is less than str1");
    } else {
       printf("str1 is equal to str2");
    }
    */

    /*
    //// TEST myStrncmp Function

    char str1[15] = "abcdef";
    char str2[15] = "ABCDEF";
    int ret;
    ret = strncmp(str1, str2, 4);

    if(ret < 0) {
       printf("str1 is less than str2");
    } else if(ret > 0) {
       printf("str2 is less than str1");
    } else {
       printf("str1 is equal to str2");
    }
    */

    /*
    //// TEST myStrcoll Function
    char str1[15] = "abc";
    char str2[15] = "ABC";
    int ret;

    ret = myStrcoll(str1, str2);

    printf("%i\n",ret);
    */

    /*
    //// TEST myStrcpy Function
    char src[40];
    char dest[100];

    myMemset(dest, '\0', sizeof(dest));
    myStrcpy(src, "This is tutorialspoint.com");
    myStrcpy(dest, src);

    printf("Final copied string : %s\n", dest);
    */

    /*
    //// TEST myStrncpy Function
    char src[40];
    char dest[12];

    myMemset(dest, '\0', sizeof(dest));
    myStrcpy(src, "This is tutorialspoint.com");
    myStrncpy(dest, src, 10);

    printf("Final copied string : %s\n", dest);
    */

    /*
    //// TEST myStrcspn Function
    int len;
    const char str1[] = "ABCDEF4960910";
    const char str2[] = "013";

    len = myStrcspn(str1, str2);
    printf("First matched character is at %d\n", len + 1);
    */

    /*
    //// TEST myStrpbrk Function
    const char str1[] = "abcde2fghi3jk4l";
    const char str2[] = "34";
    char *ret;

    ret = myStrpbrk(str1, str2);
    if(ret) {
       printf("First matching character: %c\n", *ret);
    } else {
       printf("Character not found");
    }
    */

    /*
    //// TEST myStrrchr Function
    const char str[] = "https://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = myStrrchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);
    */

    /*
    //// TEST myStrspn Function
    int len;
    const char str1[] = "ABCDEFG019874";
    const char str2[] = "ABCD";

    len = myStrspn(str1, str2);

    printf("Length of initial segment matching %d\n", len );
    */

    /*
    //// TEST myStrstr Function
    const char haystack[20] = "TutorialsPoint";
    const char needle[10] = "Point";
    char *ret;

    ret = myStrstr(haystack, needle);

    printf("The substring is: %s\n", ret);
    */

    /*
    //// TEST myStrtok Function
    char str[80] = "This is - www.tutorialspoint.com - website";
    const char s[2] = "-";
    char *token;

    // get the first token
    token = myStrtok(str, s);

    // walk through other tokens
    while( token != NULL ) {
       printf( " %s\n", token );

       token = myStrtok(NULL, s);
    }
    */
   
    /*
    //// TEST myStrxfrm Function
    char dest[20];
    char src[20];
    int len;

    myStrcpy(src, "Tutorials Point");
    len = myStrxfrm(dest, src, 20);

    printf("Length of string |%s| is: |%d|", dest, len);
    */

    return 0;
}