#include <stdio.h>
 
int main() {

// problema 1
/*
  int n;
  scanf("%d", &n);

if (n % 2 == 0) {
    printf("par\n");
  } else {
    printf("impar\n");
  }

if (n & 1) {
    printf("impar\n");
} else {
    printf("par\n");
}
*/

// problema 2
/*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0) {
        if ((a + b) > c && (a + c) > b && (b + c) > a) {
            printf ("DA\n");
        } else {
            printf ("NU\n");
        }
    }
    else {
        printf ("NU\n");
    }
*/

// problema 3
/*
printf("%ld\n%ld\n%ld\n", sizeof(short int), sizeof(int), sizeof(long int));
    short int a;
    int b;
    long int c;
printf("%ld\n%ld\n%ld\n", sizeof(a), sizeof(b), sizeof(c));
*/

//problema 4
/*
    unsigned int n;
    scanf("%u", &n);
    while (n) {
        for (int i = 0; i <n; i ++)
        {
            printf("*");
        }
        printf("\n");
        n--;
    }
*/

//problema 5
/*
    unsigned int n;
    unsigned long long factorial = 1;
    scanf("%u", &n);
    if (n == 0) {
        printf("1\n");
        return 0;
    }
    while (n > 1) {
        factorial *= n;
        n--;
    }
    printf ("%llu\n", factorial);
*/

//problema 6
    int n, nrcif = 1, copn;
    scanf("%d", &n);
    copn = n;
    while (copn){
        nrcif *= 10;
        copn /= 10;
    }
    while (n) {
        if (n % 10 == n / nrcif)
    }
    return 0;
}


