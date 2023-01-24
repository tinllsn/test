#include <bits/stdc++.h>
using namespace std;
int check(int a)
{
    if (a != 1)
    {
        int c = 0;

        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                c++;
            }
        }
        if (c == 0)
        {
            return a;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int sum = 0;
    int n;
    cin >> n;
    int a[n];
    if (n <= 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + check(a[i]);
        }
        if (sum > 0)
        {
            cout << sum << endl;
        }
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}
