#include <stdio.h>
int main() {
char ch, enc_ch, dec_ch;
char key=0xAA;
printf("Enter a character to encrypt: ");
scanf(" %c", &ch);
enc_ch=ch^key;
printf("\nEncrypted character: %c", enc_ch);
dec_ch=enc_ch^key;
printf("\nDecrypted character: %c", dec_ch);
printf("\nOriginal character: %c", ch);
return 0;
}

