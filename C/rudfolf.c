#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int min_deletions_to_make_beautiful(char *s, int n) {
    int p = 0, i = 0, e = 0;
    int deletions = 0;

    for (int j = 0; j < n; j++) {
        if (s[j] == 'p' || s[j] == 'm') {
            p++;
        } else if (s[j] == 'i') {
            if (p > 0) {
                i++;
                p--;
            }
        } else if (s[j] == 'e') {
            if (i > 0) {
                e++;
                i--;
            }
        }
    }

    deletions = p + i + e;
    return deletions;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        printf("%d\n", min_deletions_to_make_beautiful(s, n));
    }

    return 0;
}
