void Bubble_sort(int mas[], int n)
{
    for (int i = 0; i < n; i++) {       //n - count of elements
        for (int j = 0; j < n-1; j++) {
            if (mas[j] > mas[j + 1]) {
                int b = mas[j];         // temp variable
                mas[j] = mas[j + 1];    // swap positions
                mas[j + 1] = b;         // and values of elements
            }
        }
    }
}