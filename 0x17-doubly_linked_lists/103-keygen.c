/*
 * File_name: 103-keygen.c
 * Created: 18th May, 2023
 * Auth: David James Taiye(Official0mega)
 * Size: undefined
 * Project: 0x17-doubly_linked_lists
 * Status: submitted.
 */


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int f2(char *str, int len);
int f3(char *str, int len);
int f4(char *str, int len);
int f5(char *str, int len);
int f6(char *str, int len);

/**
 * main - This will generate a key for the crackme5 program
 * @argc: No.of arguments that were passed
 * @argv: Arguments that were passed
 *
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	char *username = NULL;
	char key[7] = {0};
	int unknown_len = 0;
	char *passwd_ptr = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjuk";

	if (argc == 2)
	{
		username = argv[1];
		while (username[unknown_len] != '\0')
			unknown_len++;
		key[0] = passwd_ptr[(unknown_len ^ 59) & 63];
		key[1] = passwd_ptr[f2(username, unknown_len)];
		key[2] = passwd_ptr[f3(username, unknown_len)];
		key[3] = passwd_ptr[f4(username, unknown_len)];
		key[4] = passwd_ptr[f5(username, unknown_len)];
		key[5] = passwd_ptr[f6(username, unknown_len)];
		printf("%s\n", key);
	}
	else
	{
		printf("Usage: %s username\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

/**
 * f2 - Computes the second character in the key for the given username
 * @str: variable for username
 * @len: Length for username
 *
 * Return: calculated  character
 */
int f2(char *str, int len)
{
	int comp_1, comp_2, k;

	comp_1 = 0;
	comp_2 = 0;
	while (comp_2 < len)
	{
		k = str[comp_2];
		comp_1 = comp_1 + k;
		++comp_2;
	}
	return ((comp_2 ^ 79) & 63);
}

/**
 * f3 - Computes the third character in the key for the given username
 * @str: variable for username
 * @len: Length for username
 *
 * Return: calculated character
 */
int f3(char *str, int len)
{
	int comp_1, comp_2, k;

	comp_1 = 1;
	comp_2 = 0;
	while (comp_2 < len)
	{
		k = str[comp_2];
		comp_1 = k * comp_1;
		++comp_2;
	}
	return ((comp_1 ^ 85) & 63);
}

/**
 * f4 - Computes the fourth character in the key for the given username
 * @str: variable for username
 * @len: Length for username
 *
 * Return: calculated character
 */
int f4(char *str, int len)
{
	int comp_1, comp_2, i, j, rdi10, n;

	comp_1 = str[0];
	comp_2 = 0;
	while (comp_2 < len)
	{
		i = str[comp_2];
		if (i > comp_1)
		{
			j = str[comp_2];
			comp_2 = j;
		}
		++comp_2;
	}
	rdi10 = comp_1 ^ 14;
	*(&rdi10 + 4) = 0;
	srand(rdi10);
	n = rand();
	return (n & 63);
}

/**
 * f5 - Computes the fifth character in the key for the given username
 * @str: variable for username
 * @len: Length for username
 *
 * Return: calculated character
 */
int f5(char *str, int len)
{
	int comp_1, comp_2, i, b, k;

	comp_1 = 0;
	comp_2 = 0;
	while (comp_2 < len)
	{
		i = str[comp_2];
		b = str[comp_2];
		comp_1 = comp_1 + b * i;
		++comp_2;
	}
	k = comp_1;
	k = k ^ 0xef;
	return (k & 63);
}

/**
 * f6 - Computes the sixth character in the key for the given username
 * @str: variable for username
 * @len: Length for username
 *
 * Return: calculated character
 */
int f6(char *str, int len)
{
	int comp_1, comp_2, n;

	(void)len;
	comp_1 = 0;
	comp_2 = 0;
	while (str[0] > comp_2)
	{
		n = rand();
		comp_1 = n;
		++comp_2;
	}
	comp_1 ^= 0xe5;
	return (comp_1 & 63);
}
