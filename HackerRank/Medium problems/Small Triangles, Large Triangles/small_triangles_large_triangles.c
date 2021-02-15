void sort_by_area(triangle* tr, int n) {

    int i,j,k;
    triangle tri;
    float ar[n],p,s,temp;
    for(i = 0;i < n;i++)
    {
        p = (tr[i].a+tr[i].b+tr[i].c)/2.0;
        s = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        ar[i] = s;
    } 
    for(j = 1; j < n; j++)
    {
        for(i = 0; i < n-j; i++)
        {
            if(ar[i]>ar[i+1])
            {
                temp = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = temp;

                tri = tr[i];
                tr[i] = tr[i+1];
                tr[i+1] = tri;
            }
        }
    }
}

