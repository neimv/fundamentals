#include<stdio.h>
#include<stdlib.h>


int main() {
    char ch;

    printf("Enter any vowel\n");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
            printf("You entered a\n");
            break;
        case 101:
            printf("You entered e\n");
            break;
        case 'i':
            printf("You entered i\n");
            break;
        case 111:
            printf("You entered o\n");
            break;
        case 'u':
            printf("You entered u\n");
            break;
        default:
            printf("You have not entered any vowel\n");
    }

    return EXIT_SUCCESS;
}

