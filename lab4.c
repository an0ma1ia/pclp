#include <stdio.h>
#include <limits.h>

int func_1a (int v[]) {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i ++)
        scanf ("%d", &v[i]);
    return n;
}

void func_1b (int n, int v[]) {
    for (int i = 0; i < n; i ++) {
        printf ("%d ", v[i]);
    }
}

int func_2a (int n, int v[]) {
    int sum = 0;
    for (int i = 0; i < n; i ++) {
        sum += v[i];
    }
    return sum;
}

int func_2b (int n, int v[]) {
    int mini = __INT_MAX__;
    for (int i = 0; i < n; i ++) {
        if (v[i] < mini) {
            mini = v[i];
        }
    }
    return mini;
}

int func_2c (int n, int v[]) {
    int maxi =  INT_MIN;
    int posmax = -1;
    for (int i = n - 1; i >= 0; i --) {
        if (v[i]> maxi) {
            maxi = v[i];
            posmax = i;
        }
    }
    return posmax;
}

double func_2d (int n, int v[], int sum) {
    double avg = 0;
    avg = (double) (sum) / (double) n;
    return avg;
}

int func_2e (int n, int v[], int x) {
    for (int i = 0; i < n; i ++){
        if (v[i] == x){
            return i;
            break;
        }
    }
    return -1;
}

void func_3 (int n, int v[]) {
    for (int i = 0; i < n - 1; i ++)
        for (int j = i + 1; j < n; j ++){
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    return;
}

int main(){

    int v[100];
    int nr_elem = func_1a (v);
    int sum = func_2a (nr_elem, v);

    printf ("\n");

    // nr. de elem. din vector
    printf ("Numarul de elemente din vector este: %d\n", nr_elem);

    // afisarea elem. din vector pe o singura linie
    printf ("Elemenetele din vector sunt: ");
    func_1b (nr_elem, v);
    printf ("\n");

    // suma din vector
    printf ("Suma elementelor este: %d\n", func_2a (nr_elem, v));

    // minimul din vector
    printf ("Minimul din vector este: %d\n", func_2b (nr_elem, v));

    // pozitia maximului din vector
    printf ("Pozitia maximului este: %d\n", func_2c (nr_elem, v));

    // media aritmetica a elementelor din vector
    printf ("Media aritmetica a elementelor este: %f\n", func_2d (nr_elem, v, sum));

    // cautare liniara
    int x;
    scanf ("%d", &x);
    printf ("Pozitia elementului cautat este: %d\n", func_2e (nr_elem, v, x));

    // sortarea vectorului
    func_3 (nr_elem, v);
    printf ("Vectorul sortat este: ");
    func_1b (nr_elem, v);
    printf ("\n");

    return 0;
}

