#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>

/* Rest of your function definitions */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>

/* Rest of your function definitions */

char *_strstr(char *haystack, char *needle)
{
    int haystack_len, needle_len, i, j;

    haystack_len = _strlen(haystack);
    needle_len = _strlen(needle);

    if (needle_len == 0)
        return haystack;

    for (i = 0; i <= haystack_len - needle_len; i++)
    {
        for (j = 0; j < needle_len; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (j == needle_len)
            return (haystack + i);
    }

    return NULL;
}


int _putchar(char c)
{
	return putchar(c);
}

int _islower(int c)
{
	return islower(c);
}

int _isalpha(int c)
{
	return isalpha(c);
}

int _abs(int n)
{
	return abs(n);
}

int _isupper(int c)
{
	return isupper(c);
}

int _isdigit(int c)
{
	return isdigit(c);
}

int _strlen(char *s)
{
	int count = 0;
	while (*s++)
		count++;
	return count;
}

void _puts(char *s)
{
	printf("%s\n", s);
}

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;
	while ((*dest++ = *src++))
		;
	return temp;
}

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		result = result * 10 + (*s++ - '0');
	}

	return sign * result;
}

char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return temp;
}

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	while (*dest)
		dest++;
	while (n-- && (*dest++ = *src++))
		;
	return temp;
}

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	while (n-- && (*dest++ = *src++))
		 ;
	while (n-- > 0)
		*dest++ = '\0';
	return temp;
}

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	while (n--)
		*s++ = b;
	return temp;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;
	while (n--)
		*dest++ = *src++;
	return temp;
}

char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (*s == c) ? s : NULL;
}

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s && _strchr(accept, *s++))
		count++;
	return count;
}

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return s;
		s++;
	}
	return NULL;
}


char *_strst(char *haystack, char *needle)
{
    int haystack_len, needle_len, i, j;

    haystack_len = _strlen(haystack);
    needle_len = _strlen(needle);

    if (needle_len == 0)
        return haystack;

    for (i = 0; i <= haystack_len - needle_len; i++)
    {
        for (j = 0; j < needle_len; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (j == needle_len)
            return (haystack + i);
    }

    return NULL;
}

