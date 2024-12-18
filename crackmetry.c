#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
    
    printf("Enter the password: ");
    scanf("%49s", enteredPassword); // Read the password, limiting input to 49 characters
    if (strcmp(enteredPassword, correctPassword) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Incorrect password!\n");
    }
    system("pause");
    return 0;
}
