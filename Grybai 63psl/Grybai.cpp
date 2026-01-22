#include <bits/stdc++.h>
using namespace std;

void sprendimas(int &is_viso_dienu, int &baravykai, int &raudonvirsiai, double &mase);

int main()
{
    int is_viso_dienu;
    int baravykai = INT_MIN;
    int raudonvirsiai = INT_MIN;
    double mase = INT_MIN;

    sprendimas(is_viso_dienu, baravykai, raudonvirsiai, mase);

    return 0;
}
void sprendimas(int &is_viso_dienu, int &baravykai, int &raudonvirsiai, double &mase)
{
    ifstream sk("Duom.txt");
    ofstream rez("Rez.txt");
    sk >> is_viso_dienu;

    int baravyku_d, baravyku_men;
    int raudonvirsiu_d, raudonvirsiu_men;
    double mase_d, mase_men;

    int men, d, B, R;
    double g;

    for(int i = 1; i <= is_viso_dienu; i++)
    {
        sk >> men >> d >> g >> B >> R ;

        if(g > mase)
        {
            mase = g;
            mase_d = d;
            mase_men = men;
        }

        if(B > baravykai)
        {
            baravykai = B;
            baravyku_d = d;
            baravyku_men = men;
        }
        if(R > raudonvirsiai)
        {
            raudonvirsiai = R;
            raudonvirsiu_d = d;
            raudonvirsiu_men = men;
        }

    }

    rez <<"Derlingiausia diena: "<< mase_men <<" "<< mase_d <<endl;

    if(baravykai == 0)
    {
        rez <<"Derlingiausia baravyku diena: nera" <<endl;
    }
    else
    {
        rez <<"Derlingiausia baravyku diena: "<< baravyku_men <<" "<< baravyku_d <<endl;
    }
    if(raudonvirsiai == 0)
    {
        rez <<"Derlingiausia raudonvirsiu diena: nera" <<endl;
    }
    else
    {
        rez <<"Derlingiausia raudonvirsiu diena: "<< raudonvirsiu_men <<" "<< raudonvirsiu_d <<endl;
    }
}
