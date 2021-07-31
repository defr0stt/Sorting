void Selection_sort(int mas[], int n)
{
    int max = mas[0], count=n, f=0, a=0,b=1, temp;
    for (int i = 0; i < count; )     //n - count of elements
    {                                //
        while(f!=n)                  //from smaller to bigger   
        {                            //
            if (mas[a] >= mas[b])    //max elem in array goes to the last place
                b++;
            else
            {
                max = mas[b];
                a = b;
                b++;
            }
            f++;
        }
        temp = mas[n];
        mas[n] = mas[a];
        mas[a] = temp;
        n--;
        a = 0;
        b = 1;
    }
}