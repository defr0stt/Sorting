void Quick_sort(int mas[], int first, int last)
{
    if(first < last)
    { 
        int left = first;
        int right = last;
        int middle = mas[(left+right)/2];       // middle elem

        do 
        {
            while (mas[left] < middle)          // if lower then middle elem
                left++;                         //
            while (mas[right] > middle)         // if higher then middle elem
                right--;                        //
            if (left <= right)                  // if they don`t point on the same element
            {
                int temp = mas[left];           // swapping of elements
                mas[left] = mas[right];
                mas[right] = temp;
                left++;
                right--;
            }
        } while (left < right);                 // while they don`t point on the same element

        Quick_sort(mas, first, right);
        Quick_sort(mas, left, last);
    }
}