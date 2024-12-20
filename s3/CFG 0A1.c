#include <stdio.h>
#include <string.h>
int checkSubstring(char *str, int start, int end) {
    if (start >= end) {
        return 1; 
    }
    if (str[start] == '0' || str[start] == '1') {
        return checkSubstring(str, start + 1, end);
    }
    return 0;
}
int checkString(char *str, int start, int end) {
    if (end - start < 2) {
        return 0;
    }
    if (str[start] == '0' && str[end - 1] == '1') {
        return checkSubstring(str, start + 1, end - 1);
    }
    return 0;
}
int main() {
    char str[100];
   printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    if (checkString(str, 0, len)) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }
    return 0;
}
