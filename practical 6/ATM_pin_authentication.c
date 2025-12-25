#include <stdio.h>

int main() {
    int pin = 1234;   // correct PIN
    int enteredPin;
    int attempts;

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin != pin) {
            printf("Wrong PIN! Try again.\n");
            continue;   // skip remaining code and retry
        }

        printf("PIN verified. Access granted.\n");
        break;          // exit loop on success
    }

    if (attempts > 3) {
        printf("ATM blocked. Too many wrong attempts.\n");
    }

    return 0;
}
