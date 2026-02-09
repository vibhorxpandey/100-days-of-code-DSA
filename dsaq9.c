#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];   // assuming max length 1000
    
    scanf("%s", str);  // input string
    
    int left = 0;
    int right = strlen(str) - 1;
    
    // Reverse in-place
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }
    
    printf("%s", str);
    
    return 0;
}
