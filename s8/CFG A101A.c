#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isDerivedFromA(const char *str, int start, int end) {
    if (start > end) {
        return true;
    }
    if (str[start] == '0' || str[start] == '1') {
        return isDerivedFromA(str, start + 1, end);
    }
    return false;
}
bool isDerivedFromS(const char *str, int length) {
    for (int i = 0; i <= length - 3; i++) {
        if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1') {
            if (isDerivedFromA(str, 0, i - 1)) {
                if (isDerivedFromA(str, i + 3, length - 1)) {
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    int length = strlen(input);
    if (isDerivedFromS(input, length)) {
        printf("The string \"%s\" belongs to the language defined by the CFG.\n", input);
    } else {
        printf("The string \"%s\" does not belong to the language defined by the CFG.\n", input);
    }
    return 0;
}