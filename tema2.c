#include <stdio.h>

void compute (int *a, int *b, char operation, int *result) {
    if (operation == '+') {
        *result = *a + *b;
    }
    if (operation == '-') {
        *result = *a - *b;
    }   
    if (operation == '*') {
        *result = *a * *b;
    }
        if (operation == '/') {
        *result = *a / *b;
    }   
}

void shift_pointers (int **addr_p1, int **addr_p2, int **addr_p3) {
    int *temp = *addr_p1;
    *addr_p1 = *addr_p2;
    *addr_p2 = *addr_p3;
    *addr_p3 = temp;
}

void lil_or_big_endian (int x){

    unsigned char c = *(unsigned char *)&x; // type punning prin pointeri
                                            // &x = adresa lui x
                                            // (unsigned char *)&x = forteaza compilatorul sa considere 
                                            //  adresa lui x ca pe un sir de octeti individuali
                                            // *(unsigned char *)&x = dereferentiaza pointerul convertit
                                            // anterior si citeste doar primul octet => daca rezultatul este 5, 
                                            // atunci arhitectura procesorului este de tip Little Endiad, altfel,
                                            // daca rezultatul este 0 avem arhitectura Big Endian 
    printf ("%hhu\n", c);
}

void function (int pr1, int pr2) {

    int x = 1;
    int y = 2;
    int z = 3;

    int *p_y = &y;

    printf ("Valoarea lui x este: %d\n", *(p_y + 1));
    printf ("Valoarea lui y este: %d\n", *p_y);
    printf ("Valoarea lui z este: %d\n", *(p_y - 2));

    printf ("Valoarea lui pr1 este: %d\n", *(p_y + 3));
    printf ("Valoarea lui pr2 este: %d\n", *(p_y + 5));
}



int main (){

    // task B
    int a, b, c;
    a = 1, b = 2, c = 3;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    *p1 = 10;
    *p2 = *p1;
    *p3 = 2 * *p2;
    printf ("%d %d %d", *p1, *p2, *p3);
    printf ("\n");

    // task C
    char op;
    int x, y, result = 0;
    scanf ("%d %d %c", &x, &y, &op);
    compute (&x, &y, op, &result);
    printf ("%d\n", result);

    // task D
    shift_pointers (&p1, &p2, &p3);
    printf ("%d %d %d\n", *p1, *p2, *p3);
    shift_pointers (&p1, &p2, &p3);
    printf ("%d %d %d\n", *p1, *p2, *p3);
    shift_pointers (&p1, &p2, &p3);
    printf ("%d %d %d\n", *p1, *p2, *p3);
   
    // task F
    int t = 5;
    lil_or_big_endian (t);

    // task G
    function (3, 4);
    return 0;
}
