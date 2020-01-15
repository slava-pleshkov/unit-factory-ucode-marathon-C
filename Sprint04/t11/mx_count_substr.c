#include <stdlib.h>

int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

int mx_count_substr(const char *str, const char *sub) {
    int i = 0;

    if (str == NULL || sub == NULL)
        return -1;
    if (mx_strlen(str) >= mx_strlen(sub)) {
        while (*str) {
            if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub)))
                i++;
            str++;
        }
    }
    return i;
}
