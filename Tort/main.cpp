#include <iostream>
#include <algorithm>
using namespace std;
long long a,b,k,tmp=0;
int n;

long long howMBigger(long long s,long long n, long long width[], long long length[]){
    long long wynik = 0;
    long long x = n+1;
    for(int i=0;i<=n;++i){
        while(x>0 && width[i] * length[x-1] >= s)
            x -= 1;
        wynik += n - x + 1;
    }
    return wynik;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> n >> k;
    long long length[n+1];
    long long width[n+1];

    for(int i=0;i<n;++i){
        width[i] = -tmp;
        cin >> tmp;
        width[i] += tmp;
    }
    width[n] = a - tmp;

    tmp = 0;
    for(int i=0;i<n;++i){
        length[i] = -tmp;
        cin >> tmp;
        length[i] += tmp;
    }
    length[n] = b - tmp;

    sort(length,length+n+1);
    sort(width,width+n+1);

    unsigned long long p = 1;
    unsigned long long s;
    unsigned long long koniec = a * b;
    while(p<koniec){
        s = (p + koniec + 1)/ 2;
        if(howMBigger(s,n,width,length)>=k){
            p = s;
        } else {
            koniec = s - 1;
        }
    }
    cout << p;

    return 0;
}
