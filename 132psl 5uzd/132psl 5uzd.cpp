#include <bits/stdc++.h>

using namespace std;

void read(int y[], int x[], int ats[], int &n, int &x0, int &y0);
void calculate(int y[], int x[], int ats[], int &n, int &x0, int &y0);
void lineup(int y[], int x[], int ats[], int &n);
void print(int y[], int x[], int ats[], int &n, int &x0, int &y0);

int main()
{
    int y[105];
    int x[105];
    int ats[105];
    int n;
    int x0;
    int y0;

    read(y, x, ats, n, x0, y0);
    calculate(y, x, ats, n, x0, y0);
    lineup(y, x, ats, n);
    print(y, x, ats, n, x0, y0);

    return 0;
}
void print(int y[], int x[], int ats[], int &n, int &x0, int &y0)
{
    ofstream fout("rez.txt");
    for(int i = 0; i < 3; i++)
    {
        fout <<"("<< x[i] <<";" << y[i] <<")" ;
    }
}

void lineup(int y[], int x[], int ats[], int &n)
{
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            if(ats[i] > ats[j])
            {
                swap(ats[i], ats[j]);
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }
}

void calculate(int y[], int x[], int ats[], int &n, int &x0, int &y0)
{
    for(int i = 0; i < n; i++)
    {
        ats[i] = sqrt(pow(x[i]-x[0],2)) + sqrt(pow(y[i]-y[0],2));
    }
}

void read(int y[], int x[], int ats[], int &n, int &x0, int &y0)
{
    ifstream fin("duom.txt");
    fin >> n >> x0 >> y0;

    for(int i = 0; i < n; i++)
    {
        fin >> x[i] >> y[i];
    }
}
