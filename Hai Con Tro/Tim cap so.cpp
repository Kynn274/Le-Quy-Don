#include <bits/stdc++.h>
#define arrsize 1000006
#define ll long long
using namespace std;

ll n, x;
ll a[arrsize];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> x;
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll i = 0, j = n - 1;
    while(i != j){
        if(a[i] + a[j] > x) j--;
        else if(a[i] + a[j] < x) i++;
        else if(a[i] + a[j] == x){
            cout << i + 1 << ' ' << j + 1;
            break;
        }
    }
    if(i == j) cout << "No solution";
    return 0;
}