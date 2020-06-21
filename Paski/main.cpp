#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,s;
int nimber[1001];
int paski[3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> paski[0] >> paski[1] >> paski[2];
    for(int i=1; i<1001; i++)
    {
        vector <int> mexx;
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<=i-paski[j]; k++)
            {
                mexx.push_back(nimber[k]^nimber[i-k-paski[j]]);
            }
        }
        int szukam = -1;
        bool mexy[mexx.size()];

        for(int x=0; x<mexx.size(); x++)
        {
            mexy[x] = false;
            mexy[mexx[x]] = true;
        }
        for(int x=0; x<mexx.size(); x++)
        {
            if(!mexy[x])
            {
                szukam = x;
                break;
            }
        }
        if(szukam==-1)
        {
            nimber[i] = mexx.size();
        }
        else
        {
            nimber[i] = szukam;
        }

    }
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        nimber[s] ? cout << "1\n" : cout << "2\n";
    }
    return 0;
}
