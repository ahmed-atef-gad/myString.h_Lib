#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED
/**
*****************************************************************************
* @file             :mystring.h
* @author           :Ahmed Gad
* @brief            :an implementation of string.h library
*****************************************************************************
*/

/*********************** Includes Section Start ***********************/
#include <stdio.h>
/*********************** Includes Section End ***********************/

void *myMemset(void *StartAddress, unsigned char Value, unsigned int Length)
{
    unsigned char *tmpstrtadd = (unsigned char *)StartAddress;
    if(NULL == StartAddress)
    {
        printf("myMemSet function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(Length--)
        {
            *tmpstrtadd++ = Value;
        }
    }
    return StartAddress;
}

void *myMemcpy(void *dest, const void * src, unsigned int Length)
{
    unsigned char *tmpdest = (unsigned char *)dest;
    unsigned char *tmpsrc = (unsigned char *)src;
    if(NULL == dest || NULL == src)
    {
        printf("myMemcpy function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(Length--)
        {
            *tmpdest++ = *tmpsrc++;
        }
    }
    return dest;
}

int myMemcmp(const void *str1, const void *str2, unsigned int Length)
{
    int *tmpstr1 = (int *)str1;
    int *tmpstr2 = (int *)str2;
    char rtrn =0;
    if(NULL == str1 || NULL == str2)
    {
        printf("myMemcpy function failed due to a NULL pointer !! \n");
    }
    else
    {
        if(str1 == str2)
        {
            rtrn=0;
        }
        else
        {
            while(Length--)
            {
                if(*tmpstr1 != *tmpstr2)
                {
                    rtrn = (*tmpstr1 < *tmpstr2) ? -1 : 1;
                    break;
                }
                else
                {
                    tmpstr1++;
                    tmpstr2++;
                }
            }
        }
    }
    return rtrn;
}

void *myMemchr(const void *str, int c, unsigned int Length)
{
    unsigned char *tmpstr = (unsigned char *)str;
    if(NULL == str)
    {
        printf("myMemchr function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(Length--)
        {
            if(*tmpstr == c)
            {
                break;
            }
            else
            {
                tmpstr++;
            }
        }
    }
    return tmpstr;
}

void *myMemmove(void *dest, const void *src, size_t Length)
{
    unsigned char *tmpdest = (unsigned char *)dest;
    unsigned char *tmpsrc = (unsigned char *)src;
    if(NULL == dest || NULL == src)
    {
        printf("myMemmove function failed due to a NULL pointer !! \n");
        return NULL;
    }
    else
    {
        if((tmpsrc < tmpdest) && (tmpdest < (tmpsrc + Length)))
        {
            for (tmpdest += Length, tmpsrc += Length; Length--;)
            {
                *--tmpdest = *--tmpsrc;
            }
        }
        else
        {
            while(Length--)
            {
                *tmpdest++ = *tmpsrc++;
            }
        }
    }
    return dest;
}

size_t myStrlen(const char *str)
{
    char *tmpstr = (char *)str;
    int len=0;
    if(NULL == str)
    {
        printf("myStrlen function failed due to a NULL pointer !! \n");
        len = -1;
    }
    else
    {
        while(*tmpstr !='\0')
        {
            len++;
            tmpstr++;
        }
    }
    return len;
}

char *myStrcat(char *dest, const char *src)
{
    char *tmpdest = (char *)dest;
    char *tmpsrc = (char *)src;

    size_t n = myStrlen(dest);
    size_t len = myStrlen(src);

    if(NULL == dest || NULL == src)
    {
        printf("myStrcat function failed due to a NULL pointer !! \n");
        return NULL;
    }
    else
    {
        while(len--)
        {
            *(tmpdest + n++) = *tmpsrc++;
        }
    }
    return dest;
}

char *myStrncat(char *dest, const char *src, size_t len)
{
    char *tmpdest = (char *)dest;
    char *tmpsrc = (char *)src;

    size_t n = myStrlen(dest);

    if(NULL == dest || NULL == src)
    {
        printf("myStrncat function failed due to a NULL pointer !! \n");
        return NULL;
    }
    else
    {
        while(len--)
        {
            *(tmpdest + n++) = *tmpsrc++;
        }
        tmpdest[n] = '\0';
    }
    return dest;
}

char *myStrchr(const char *str, int c)
{
    char *tmpstr = (char *)str;
    size_t Length = myStrlen(tmpstr);
    if(NULL == str)
    {
        printf("myStrchr function failed due to a NULL pointer !! \n");
        return NULL;
    }
    else
    {
        while(Length--)
        {
            if(*tmpstr == c)
            {
                break;
            }
            else
            {
                tmpstr++;
            }
        }
    }
    return tmpstr;
}

int myStrcmp(const char *str1, const char *str2)
{
    char *tmpstr1 = (char *)str1;
    char *tmpstr2 = (char *)str2;
    char rtrn =0;

    if(NULL == str1 || NULL == str2)
    {
        printf("myStrcmp function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(*tmpstr1 && *tmpstr2)
        {
            if(*tmpstr1 != *tmpstr2)
            {
                rtrn = (*tmpstr1 < *tmpstr2) ? -1 : 1;
                break;
            }
            else
            {
                tmpstr1++;
                tmpstr2++;
            }
        }

    }
    return rtrn;
}

int myStrncmp(const char *str1, const char *str2, size_t n)
{
    char *tmpstr1 = (char *)str1;
    char *tmpstr2 = (char *)str2;
    char rtrn =0;

    if(NULL == str1 || NULL == str2)
    {
        printf("myStrcnmp function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(n--)
        {
            if(*tmpstr1 != *tmpstr2)
            {
                rtrn = (*tmpstr1 < *tmpstr2) ? -1 : 1;
                break;
            }
            else
            {
                tmpstr1++;
                tmpstr2++;
            }
        }
    }
    return rtrn;
}

int myStrcoll(const char *str1, const char *str2){
    char *tmpstr1 = (char *)str1;
    char *tmpstr2 = (char *)str2;
    char rtrn =0;

    if(NULL == str1 || NULL == str2)
    {
        printf("myStrcoll function failed due to a NULL pointer !! \n");
    }
    else
    {
        while (*tmpstr1 && *tmpstr2)
        {
            if(*tmpstr1 != *tmpstr2)
            {
                rtrn = (*tmpstr1 < *tmpstr2) ? -1 : 1;
                break;
            }
            else
            {
                tmpstr1++;
                tmpstr2++;
            }
        }
    }
    return rtrn;
}

char *myStrcpy(char *dest, const char *src)
{
    char *tmpdest = (char *)dest;
    char *tmpsrc = (char *)src;
    if(NULL == dest || NULL == src)
    {
        printf("myStrcpy function failed due to a NULL pointer !! \n");
    }
    else
    {
        while (*tmpsrc != '\0')
        {
            *tmpdest++ = *tmpsrc++;
        }
        *tmpdest = '\0';
    }
    return dest;
}

char *myStrncpy(char *dest, const char *src, size_t n)
{
    char *tmpdest = (char *)dest;
    char *tmpsrc = (char *)src;
    if(NULL == dest || NULL == src)
    {
        printf("myStrcpy function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(n--)
        {
            if(*tmpsrc != '\0')
            {
                *tmpdest++ = *tmpsrc++;
            }
            else
            {
                *tmpdest++ = '\0';
            }
        }
    }
    return dest;
}

size_t myStrcspn(const char *str1, const char *str2)
{
    char *tempStr1 = (char *)str1;
    int Lentgh = myStrlen(str1);
    int rtrn = -1;
    if (str1 == NULL || str2 == NULL)
    {
        printf("myStrcspn function failed due to a NULL pointer !! \n");
        return rtrn;
    }
    else
    {
        for (int i = 0; i < Lentgh; i++)
        {
            if (*tempStr1++ == *str2)
            {
                rtrn = i;
                break;
            }
        }
    }
    return rtrn;
}

char *myStrpbrk(const char *str1, const char *str2)
{
    char *tmpstr1 = (char *)str1;
    char *tmpstr2 = (char *)str2;
    int len1 = myStrlen(str1);
    int len2= myStrlen(str2);
    if (str1 == NULL || str2 == NULL)
    {
        printf("myStrpbrk function failed due to a NULL pointer !! \n");
        return NULL;
    }
    else
    {
        while(len2--)
        {
            for (int j = 0; j < len1; j++)
            {
                if (*tmpstr1 == *tmpstr2)
                {
                    return tmpstr1;
                }
                else
                {
                    tmpstr1++;
                }
            }
            tmpstr1 = (char *)str1;
            tmpstr2++;
        }
    }
    return NULL;
}

char *myStrrchr(const char *str, int c)
{
    char *tmpstr = (char *)str;
    size_t Length = myStrlen(tmpstr);
    tmpstr += Length;
    if(NULL == str)
    {
        printf("myStrrchr function failed due to a NULL pointer !! \n");
        return NULL;
    }
    else
    {
        while(Length--)
        {
            if(*tmpstr == c)
            {
                break;
            }
            else
            {
                tmpstr--;
            }
        }
    }
    return tmpstr;
}

size_t myStrspn(const char *str1, const char *str2)
{
    char *tmpstr1 = (char *)str1;
    char *tmpstr2 = (char *)str2;
    int len1 = myStrlen(str1);
    int len2 = myStrlen(str2);
    size_t flag = 0;
    if (str1 == NULL || str2 == NULL)
    {
        printf("myStrspn function failed due to a NULL pointer !! \n");
        return flag;
    }
    else
    {
        while (len2--)
        {
            for (int i = 0; i < len1; i++)
            {
                if (tmpstr1[i] == *tmpstr2)
                {
                    flag++;
                    break;
                }
            }
            tmpstr2++;
        }
    }
    return flag;
}

char *myStrstr(const char *haystack, const char *needle)
{
    char *tmpstr1 = (char *)haystack;
    char *tmpstr2 = (char *)needle;
    int len1 = myStrlen(haystack);
    int len2 = myStrlen(needle);

    if (haystack == NULL || needle == NULL)
    {
        printf("myStrstr function failed due to a NULL pointer !! \n");
        return NULL;
    }
    else
    {
        while(len1--)
        {
            if (myStrncmp(tmpstr1, tmpstr2, len2) == 0)
            {
                return tmpstr1;
            }
            else
            {
                tmpstr1++;
            }
        }
    }
    return NULL;
}

char *myStrtok(char *str, const char *delim)
{
    static char *backup = NULL;

    if (backup != NULL)
    {
        str = backup;
    }

    if (str == NULL && backup == NULL)
    {
        return NULL;
    }
    char *tmpstr = str;
    int n1 = myStrlen(str);

    while (n1--)
    {
        if (*tmpstr == *delim)
        {
            *tmpstr = '\0';
            backup = ++tmpstr;
            break;
        }
        if (*(tmpstr + 1) == '\0')
        {
            backup = NULL;
        }
        tmpstr++;
    }

    return str;
}

size_t myStrxfrm(char *dest, const char *src, size_t n)
{
    char *tmpsrc = (char *)src;
    char *tmpdest = (char *)dest;

    if (dest == NULL || src == NULL)
    {
        return (size_t)NULL;
    }

    while (n--)
    {
        *tmpdest++ = *tmpsrc++;
    }
    *tmpdest = '\0';

    return myStrlen(dest);
}
#endif // MYSTRING_H_INCLUDED