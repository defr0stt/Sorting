void Insertion_sort(int mas[], int n)
{
    int temp,                                       // temp variable 
        item,                                       // index of previous element
        * array_ptr=mas;                            //pointer on array
    for (int counter = 1; counter < n; counter++)   //n-array length 
    {
        temp = array_ptr[counter];                  // temp = present element in array
        item = counter - 1;                         // remember index of the previod element
        while (item >= 0 && array_ptr[item] > temp) 
        {
            array_ptr[item + 1] = array_ptr[item];  // swapping of array elements
            array_ptr[item] = temp;
            item--;
        }
    }
}