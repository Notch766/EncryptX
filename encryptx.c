#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void slide(char alphabet[26]);
void vegane(char alphabet[26]);

int main(void) {

    int user_option;
    char alphabet[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' '};

    printf("\t\t----------Welcome to EncryptX. An Open Source Encryptor For University Students----------\n");

    do {

        printf("\n\nChoose an Encryption Method:\n1.Caesar (slide)\n2.Vegane\n0.Exit EncryptX\n#");
        scanf("%d", &user_option);

        if (user_option == 1) {

            slide(alphabet);

        } else if (user_option == 2) {

            //vegane(alphabet);
            printf("\n!!!!!Vegane Encryption Method is Not Ready Yet! Choose option 1 or 0!!!!!");

        }

    } while (user_option != 0);

    return EXIT_SUCCESS;

}

void slide (char alphabet[27]) {

    char user_input[100];
    int slides;

    printf("\nPlease, Type The Phrase You Want to Encrypt. USE CAPITAL LETTERS ONLY AND NO SPACE!:\n#");
    scanf(" %s", user_input);

    printf("Please Choose Number of Slides:\n#");
    scanf("%d", &slides);

    printf("Encrypting Your Phrase...\n\n");

    for (int phrase_letter = 0; user_input[phrase_letter] != '\0'; ++phrase_letter) {

        for (int alphabet_letter = 0; alphabet_letter <= 27; ++alphabet_letter) {

            if (user_input[phrase_letter] == alphabet[alphabet_letter]) {

                printf("%c", alphabet[(alphabet_letter + slides) % 26]);
                break;

            }

        }

    }

}
