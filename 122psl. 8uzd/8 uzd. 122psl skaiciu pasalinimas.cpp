#include <bits/stdc++.h>

using namespace std;

void Salinti(int A[], int &n, int reiksme)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == reiksme)
        {
            for (int j = i; j < n - 1; j++)
            {
                A[j] = A[j + 1];
            }
            n--;
            break;
        }
    }
}

int main()
{
    int n;
    int sveikieji_skaiciai[100];

    ifstream sk("duom.txt");

    sk >> n;

    for (int i = 0; i < n; i++)
    {
        sk >> sveikieji_skaiciai[i];
        if
    }



    Salinti(sveikieji_skaiciai, n, salinama_reiksme);


    ofstream rez("rez.txt");

    for (int i = 0; i < n; i++)
    {
        rez << sveikieji_skaiciai[i] << " ";
    }
    rez << endl;

    return 0;
}
