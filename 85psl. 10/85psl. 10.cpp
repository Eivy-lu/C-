#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
#include <fstream>

int AddRdig (int n, int k);

using namespace std;
int main()
{
    int N;
    int a;
    int n, k;

    ifstream sk("duom.txt");
    sk >> N;

    ofstream rez ("rez.txt");

    for (int i = 1; i <= N; i++)
    {
        sk >> n >> k;
        rez <<"n = "<< n <<", k = "<< k <<". Ats = "<< AddRdig (n, k) <<endl;
    }
    return 0;
}
int AddRdig (int n, int k)
{
    n = n * 10;
   int a;
    return a = n + k;
}
