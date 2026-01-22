#include <bits/stdc++.h>

using namespace std;

void read(int metai[], int &n);
void lineup(int metai[], int &n, int &did);
void print(int metai[], int &n, int &did);

int main()
{
    int metai[10000];
    int n;
    int did = INT_MIN;

    read(metai, n);
    lineup(metai, n, did);
    print(metai, n, did);

    return 0;
}

void print(int metai[], int &n, int &did)
{
    ofstream fout("rez.txt");

    fout << did <<endl;

}

void lineup(int metai[], int &n, int &did)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(metai[j] > metai[i])
            {
                swap(metai[j], metai[i]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            if((metai[i] - metai[j]) > did)
            {
                did = metai[i] - metai[j];
            }
        }
    }
}

void read(int metai[], int &n)
{
    ifstream fin("duom.txt");
    fin >> n;

    for(int i = 0; i < n; i++)
    {
        fin >> metai[i];
    }
}


