#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateKey(const char *username, char *key)
{
	int i;
	int len = strlen(username);

	for (i = 0; i < len; i++)
		key[i] = username[i] ^ len;

	key[i] = '\0';
}

int main(int argc, char *argv[])
{
	char key[100];

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	generateKey(argv[1], key);
	printf("%s\n", key);

	return (0);
}
