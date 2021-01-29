#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c[32] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int position = 0;
        while (temp > 0)
        {
            if (temp & 1)
            {
                c[position]++;
            }
            position++;
            temp = temp >> 1;
        }
    }
    int number = 0, factor = 1;
    for(int i = 0; i<32; i++)
    {
        c[i] = c[i]%3;
        number = number + c[i]*factor;
        factor = factor<<1;
    }
    cout<<number;
    return 0;
}
