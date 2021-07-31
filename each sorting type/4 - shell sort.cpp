void Shell_sort(int mas[], int n)
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)     //n - count of elements
        for (i = step; i < n; i++)              //
        {                                       //sorting with using whjile step!=0
            tmp = mas[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mas[j - step])
                    mas[j] = mas[j - step];
                else
                    break;
            }
            mas[j] = tmp;
        }
}