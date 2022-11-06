#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMSTR 3
#define BUFFSIZE 100

int main(void) {
    char *words[NUMSTR];
    char buffer[BUFFSIZE];
    size_t i, count = 0, slen; /* can replace size_t with int if you prefer */

    /* loops only for three input strings */
    for (i = 0; i < NUMSTR; i++) {

        /* read input of one string, with error checking */
        printf("Enter a word: ");
        if (fgets(buffer, BUFFSIZE, stdin) == NULL) {
            fprintf(stderr, "Error reading string into buffer.\n");
            exit(EXIT_FAILURE);
        }

        /* removing newline from buffer, along with checking for overflow from buffer */
        slen = strlen(buffer);
        if (slen > 0) {
            if (buffer[slen-1] == '\n') {
                buffer[slen-1] = '\0';
            } else {
                printf("Exceeded buffer length of %d.\n", BUFFSIZE);
                exit(EXIT_FAILURE);
            }
        }

        /* checking if nothing was entered */
        if (!*buffer) {
            printf("No string entered.\n");
            exit(EXIT_FAILURE);
        }

        /* allocate space for `words[i]` and null terminator */
        words[count] = malloc(strlen(buffer)+1);

        /* checking return of malloc, very good to do this */
        if (!words[count]) {
            printf("Cannot allocate memory for string.\n");
            exit(EXIT_FAILURE);
        }

        /* if everything is fine, copy over into your array of pointers */
        strcpy(words[count], buffer);

        /* increment count, ready for next space in array */
        count++;
    }

    /* reading input is finished, now time to print and free the strings */
    printf("\nYour strings:\n");
    for (i = 0; i < count; i++) {
        printf("words[%zu] = %s\n", i, words[i]);
        free(words[i]);
        words[i] = NULL;
    }

    return 0;
}