/*
    Given a string s, find the length of the longest  substring
    without repeating characters.
    Example 1:
    Input: s = "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.
*/

#include<stdio.h>
#include<stdlib.h>

int sizeOfString();
void repeatedChar();

int main() {

    char *s;
    s = (char *)malloc(sizeof(char)*15);
    printf("write a word (max 15 characters): ");
    scanf("%s",s);
    
    int size = sizeOfString(s);
    s = (char *)realloc(s, size*sizeof(char));

    repeatedChar(s, size);
    free(s);

    return 0;
}

int sizeOfString(char *s) {
    int size = 0;
    while(*s++!='\0') {
        size++;
    }
    return size;
}

void repeatedChar(char *s, int size) {
    int tempI, tempJ, flag = 0;
    
    for(int i = 0; i<size; i++) {
        if(flag!=1) {
            for(int j=i+1; j<size; j++) {
                if(s[i]!=s[j]);
                else {
                    tempI = i;
                    tempJ = j;
                    flag = 1;
                    break;
                }
            }
        }
        else {
            break;
        }
    }

    for(int j=tempI; j<tempJ; j++) {
        printf("%c",s[j]);
    }
    printf("\nlength is = %d", tempJ);
}

/*
    GEMINI
    #include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int char_set[128] = {0}; // Assuming ASCII characters
    int l = 0, r = 0, res = 0;

    while (r < n) {
        if (char_set[s[r]] > 0) {
            while (l < r && char_set[s[r]] > 0) {
                char_set[s[l]]--;
                l++;
            }
        }

        char_set[s[r]]++;
        res = (r - l + 1) > res ? (r - l + 1) : res;
        r++;
    }

    return res;
}

int main() {
    char s[] = "abcabcbb";
    int length = lengthOfLongestSubstring(s);
    printf("The length of the longest substring without repeating characters is: %d\n", length);
    return 0;
}

    CHATGPT
    #include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int maxLength = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int seen[256] = {0};  // ASCII karakter seti için 256 uzunluğunda bir dizi
        
        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]]) {  // Karakter daha önce görülmüşse döngüden çık
                break;
            }
            seen[(unsigned char)s[j]] = 1;  // Karakteri gördüğümüzü işaretle
            int currentLength = j - i + 1;
            if (currentLength > maxLength) {
                maxLength = currentLength;  // Maksimum uzunluğu güncelle
            }
        }
    }

    return maxLength;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int result = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", result);

    return 0;
}

*/