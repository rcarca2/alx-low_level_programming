#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    
    if (len1 + 1 > size_r || len2 + 1 > size_r) {
        // Result won't fit in the buffer
        return 0;
    }

    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;
        
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[k] = (sum % 10) + '0';
        
        i--;
        j--;
        k++;
    }

    r[k] = '\0';

    // Reverse the result string
    int left = 0;
    int right = k - 1;
    while (left < right) {
        char temp = r[left];
        r[left] = r[right];
        r[right] = temp;
        left++;
        right--;
    }

    return r;
}

int main() {
    char n1[] = "123456789012345678901234567890";
    char n2[] = "987654321098765432109876543210";
    char result[50];  // Adjust the buffer size as needed

    char *sum = infinite_add(n1, n2, result, sizeof(result));
    if (sum) {
        printf("Sum: %s\n", sum);
    } else {
        printf("Result cannot fit in the buffer.\n");
    }

    return 0;
}

