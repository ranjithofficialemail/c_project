#include <stdio.h>
#include <ctype.h>  // For isalpha, isdigit functions
void char_ch
//int main() 
{
    char ch;

    // Ask the user for input
    printf("---------------------------------------------------------");
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check the type of character
    if (isalpha(ch)) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}

