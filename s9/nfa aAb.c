#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool checkString(const char *str) {
    int length = strlen(str);
    if (length < 2) {
        return false;
    }
    if (str[0] == 'b' && str[length - 1] == 'a') {
        return true;
    } else {
        return false;
    }
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (checkString(input)) {
        printf("The string \"%s\" is accepted by the NFA.\n", input);
    } else {
        printf("The string \"%s\" is not accepted by the NFA.\n", input);
    }
    return 0;
}
