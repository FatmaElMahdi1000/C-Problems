#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparator for qsort (alphabetical)
int comparator(const void *a, const void *b) {
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;
    return strcmp(str1, str2);
}

// Check if a prefix exists in the word set
int prefix_exists(char **wordset, int n, char *prefix) {
    for (int i = 0; i < n; i++) {
        if (strcmp(wordset[i], prefix) == 0) {
            return 1; // found
        }
    }
    return 0; // not found
}

int main() {
    char *words[] = {"banana", "apple", "apply", "app", "ap", "a"};
    int n = sizeof(words) / sizeof(words[0]);

    // Sort alphabetically
    qsort(words, n, sizeof(char *), comparator);

    char *ans = "";  // start with empty answer

    for (int i = 0; i < n; i++) {
        int len = strlen(words[i]);
        int valid = 1;

        // Check if all prefixes exist
        for (int k = 1; k < len; k++) {
            char prefix[100]; // assume max length < 100
            strncpy(prefix, words[i], k);
            prefix[k] = '\0'; // null-terminate
            if (!prefix_exists(words, n, prefix)) {
                valid = 0;
                break;
            }
        }

        // Update answer if valid
        if (valid) {
            if (strlen(words[i]) > strlen(ans) ||
                (strlen(words[i]) == strlen(ans) && strcmp(words[i], ans) < 0)) {
                ans = words[i];
            }
        }
    }

    printf("Longest word: %s\n", ans);
    return 0;
}
