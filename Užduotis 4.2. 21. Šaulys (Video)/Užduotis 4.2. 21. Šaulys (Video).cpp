#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &balai);
void spausdinimas(vector<int> &balai);

int main()
{
    vector<int> balai(10);

    skaitymas(balai);
    spausdinimas(balai);

    return 0;
}
void spausdinimas(vector<int> &balai)
{
    ofstream rez("rez.txt");
    int did = INT_MIN;
    bool pirmas = true;

    for(int i = 0; i < balai.size(); i++)
    {
        if(balai[i] > did)
        {
            did = balai[i];
        }
    }

    for(int i = 0; i < balai.size(); i++)
    {
        if (balai[i] == did)
        {
            if(pirmas)
            {
                rez << i;
                pirmas = false;
            }
            else rez<<","<< i;
        }
    }

}
void skaitymas(vector<int> &balai)
{
    ifstream sk("duom.txt");
    int n;
    sk >> n;


    for(int i = 0; i < n; i++)
    {
        int balas;
        sk >> balas;
        balai[balas]++;
    }
}

