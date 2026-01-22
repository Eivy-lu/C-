#include <bits/stdc++.h>

void Salinti(int A[], int &n, int k)
{
    for(int i = k; i <= n - 1; i++)
        A[i] = A[i + 1];
    n--;
}

using namespace std;
int main()
{
    int n;
    int sveikieji_sk[10];

    ifstream sk("duom.txt");
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        sk >> sveikieji_sk [i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sveikieji_sk [i] == sveikieji_sk [j] && i != j)
            {
               Salinti (sveikieji_sk, n, j);
            }
        }
    }

    ofstream rez ("rez.txt");

    for (int i = 0; i < n; i++)
    {
        rez << sveikieji_sk [i] << " ";
    }
    return 0;
}
