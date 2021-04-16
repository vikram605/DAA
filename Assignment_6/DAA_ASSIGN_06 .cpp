#include <bits/stdc++.h>
using namespace std;

int dp[100][100];
int stockCut(int price[], int length[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (length[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = max(price[i - 1] + dp[i][j - length[i - 1]], dp[i - 1][j]);
            }
        }
    }
    return dp[n][n];
}

int main()
{
    srand(time(0));
    int n = 4;
    cout << "Enter the length of the stock:" << endl;
    cin >> n;

    int price[n];
    int length[n];
    cout << "Below is the different lengths of stock of length=" << n << ":"
         << endl;
    for (int i = 0; i < n; i++)
    {
        length[i] = i + 1;
        cout << length[i] << " ";
    }
    cout << endl;
    cout << "Below is the randomly generated prices of different length of stock:"
         << endl;
    for (int i = 0; i < n; i++)
    {
        price[i] = rand() % 10;
        cout << price[i] << " ";
    }
    cout << endl;

    cout << "Maximum possibe profit is " << stockCut(price, length, n) << ".";
    return 0;
}