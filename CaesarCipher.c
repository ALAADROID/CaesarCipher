// ALAA DROID
/* SOCIAL MEDIA: "taplink.cc/alaadroid" */

#include <stdio.h>
#include <string.h>

// Encryption function
void encryptCaesar(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (c >= 'A' && c <= 'Z') {
            text[i] = (c - 'A' + shift) % 26 + 'A';
        } else if (c >= 'a' && c <= 'z') {
            text[i] = (c - 'a' + shift) % 26 + 'a';
        }
    }
}

// Decryption function
void decryptCaesar(char *text, int shift) {
    encryptCaesar(text, 26 - shift); // Decryption is reverse of encryption
}

int main() {
    char text[100];
    int shift;

    printf("Enter the text to encrypt: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Remove newline from input

    printf("Enter the shift key: ");
    scanf("%d", &shift);

    encryptCaesar(text, shift);
    printf("Encrypted text: %s\n", text);

    decryptCaesar(text, shift);
    printf("Decrypted text: %s\n", text);

    // Print author info
    printf("\n==========================\n");
    printf("   Made by ALAA DROID\n");
    printf("   taplink.cc/alaadroid\n");
    printf("==========================\n");

    return 0;
}
