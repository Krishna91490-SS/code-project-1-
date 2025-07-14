#include <stdio.h>

// फंक्शन डिफाइन करना
int factorial(int n) {
    if(n == 0 || n == 1) return 1;  
    return n * factorial(n - 1);  // रिकर्शन
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));  // परिणाम दिखाना
    return 0;
}
