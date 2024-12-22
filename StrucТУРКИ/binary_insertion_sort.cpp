template <typename T>

void bInSort(T arr[], int n) {
    int i, j, index;
    T key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        int low = 0;
        int high = j;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < key) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        index = low;
        while (j >= index) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}