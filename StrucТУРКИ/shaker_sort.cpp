template <typename T>
void ShakeSort(T a[], int n) {
    int i, j;
    T k;
    for (i = 0; i < n / 2 + 1; i = i + 1) {
        for (j = i; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
        for (j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                k = a[j];
                a[j] = a[j - 1];
                a[j - 1] = k;
            }
        }
    }
}