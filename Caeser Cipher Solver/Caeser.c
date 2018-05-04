// Author: Drew Theis

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()  {
	char message[100];
	char decryptMessage;
	int key;
	printf("Enter a message to decrypt: ");
	gets(message);
	key = 0;
	while (key < 26) {
		for (int i = 0; message[i] != '\0'; ++i) {
			decryptMessage = message[i];

			if (decryptMessage >= 'a' && decryptMessage <= 'z') {
				decryptMessage = decryptMessage - key;

				if (decryptMessage < 'a') {
					decryptMessage = decryptMessage + 'z' - 'a' + 1;
				}
				message[i] = decryptMessage;
			}
			else if (decryptMessage >= 'A' && decryptMessage <= 'Z') {
				decryptMessage = decryptMessage - key;

				if (decryptMessage < 'A') {
					decryptMessage = decryptMessage + 'Z' - 'A' + 1;
				}
				message[i] = decryptMessage;
			}
		}
		key++;
		printf("Possible message: %s\n", message);
	}
	system("pause");
	return 0;
}
