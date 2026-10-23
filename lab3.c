#include <stdio.h>

int power1 (int n, int k) {

    for (int i = 0; i < k; i ++){
        
        n *= n;
    }
    return n;
}

int power2 (int n, int k) {

    if (k == 0)
        return 1;
    else
        return n * power2(n, k - 1);
}

int power3(int n, int k){

    if (k == 0)
        return 1;
    if (k % 2 == 1)
        return n * power3(n, k - 1);
    else
        return power3(n * n, k / 2);

}

int count_digits (int n) {
    if (n < 10)
        return 1;
    else
        return 1 + count_digits (n /= 10);
}

int reverse_number (int n) {

    int a = count_digits (n);
    int b = power3 (10, a - 1);
    int copn = n;
    n = 0;
    while (copn) {
        n += copn % 10 * b;
        copn /= 10;
        b /= 10;
    }
    return n;
}

void is_palindrome (int n) {
    if (n == reverse_number (n))
        printf ("ESTE PALINDROM\n");
    else
        printf ("NU ESTE PALINDROM\n");
}

int next_palindrome (int n) {
    while (1) {
        n ++;
        if (n == reverse_number (n))
            return n;
    }
}

void is_prime (int n) {
    if (n < 2) {
        printf ("NU ESTE PRIM\n");
        return;
    }
    for (int i = 2; i * i <= n; i ++) {
        if (n % i == 0) {
            printf ("NU ESTE PRIM\n");
            return;
        }
    }
    printf ("ESTE PRIM\n");
}


int main() {   

    int n;
    scanf ("%d", &n);
    is_prime (n);

    return 0;
}
