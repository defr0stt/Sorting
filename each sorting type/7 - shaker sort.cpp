void Shaker_sort(int mas[], int n)
{
    int left = 0, right = n - 1;         // first and last array elem
    int flag = 1;  
                                        // execution of the cycle while last left and right elements haven`t mets                            
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i < right; i++)  //going left to right
        {
            if (mas[i] > mas[i + 1])        // swap elements like in a bubble sort
            {                               
                double t = mas[i];
                mas[i] = mas[i + 1];
                mas[i + 1] = t;
                flag = 1;                   // swappings have done in this cycle
            }
        }
        right--;                            // change last right element on the previous element

        for (int i = right; i > left; i--)  //going right to left
        {
            if (mas[i - 1] > mas[i])        // swap elements like in a bubble sort
            {            
                double t = mas[i];
                mas[i] = mas[i - 1];
                mas[i - 1] = t;
                flag = 1;    // swappings have done in this cycle
            }
        }
        left++; // change last left element on the previous element
    }
}