#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int func1(int n, char a[])
{
    int i,j,si[50], c = 0;
    char temp;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n-1; j++)
            {
                if (a[j] > a[j+1])
            	{
                	temp = a[j];
                	a[j] = a[j + 1];
                	a[j + 1] = temp;
            	}
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        return 0;
}
int main()
{
    int t = 0;
    cin >> t;
    int n[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        char a[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            cin >> a[j];
        }
        func1(n[i], a);
    }

    return 0;
}

