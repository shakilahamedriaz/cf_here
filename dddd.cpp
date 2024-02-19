int sum_All(int num)
{
    
    int sum = 0;
    int zero=0;
    while (num > zero)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}


void sr_sol() {
    
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;

        ll total=0;

        for (int i = 1; i <= n; ++i)
        {
            total+=sum_All(i);
        }


        cout<<total<<N;
        //Runtime();
    }
    
}

