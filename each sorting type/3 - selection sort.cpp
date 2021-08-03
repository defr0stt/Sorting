void Selection_sort(int mas[], int n)
{
    int max = mas[0], count=n, f=0, a=0,b=1, temp;

    while(n>0)     //n - count of elements
    {                                //
        while(f<n)                  //from smaller to bigger   
        {                            //
            if (mas[a] >= mas[b] && b!=n)    //max elem in array goes to the last place
                b++;
            else if(b != n)
            {
                max = mas[b];
                a = b;
                b++;
            }
            f++;
        }
        f = 0;
        temp = mas[n-1];
        mas[n-1] = mas[a];
        mas[a] = temp;
        n--;
        max = mas[0];
        a = 0;
        b = 1;
    }
}