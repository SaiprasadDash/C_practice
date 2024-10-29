#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    printf("Enter a number: ");
    scanf("%s", num);

    for (int i = 0; i < strlen(num); i++) {
        if (num[i] == '0') {
            num[i] = '1';
        } else if (num[i] == '1') {
            num[i] = '0';
        }
    }

    printf("Modified number: %s\n", num);

    return 0;
}

//Here i have taken char as a input because it will be much easy.
//https://www.geeksforgeeks.org/find-the-length-of-character-array-in-c/
//I have used above link to for my code 