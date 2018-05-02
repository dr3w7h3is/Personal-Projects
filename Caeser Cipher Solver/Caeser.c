#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()  {
	char message[100], ch;
	int i, key;
	printf("Enter a message to decrypt: ");
	gets(message);
	key = 0;
	while (key < 26) {
		for (i = 0; message[i] != '\0'; ++i) {
			ch = message[i];

			if (ch >= 'a' && ch <= 'z') {
				ch = ch - key;

				if (ch < 'a') {
					ch = ch + 'z' - 'a' + 1;
				}
				message[i] = ch;
			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch - key;

				if (ch < 'A') {
					ch = ch + 'Z' - 'A' + 1;
				}
				message[i] = ch;
			}
		}
		key++;
		printf("Possible message: %s\n", message);
	}
	system("pause");
	return 0;
}