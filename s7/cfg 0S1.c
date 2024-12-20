#include <stdio.h>
#include <string.h>

int isValid(char *str, int start, int end) {
    if (start > end) {
        return 1;
    }
    if (str[start] == '0' && str[end] == '1') {
        return isValid(str, start + 1, end - 1);
    }
    return 0;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    if (isValid(str, 0, length - 1)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }
    return 0;
}