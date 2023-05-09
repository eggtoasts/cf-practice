#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>

using namespace std;





int main()
{

    int t;
    cin >> t;
    int book;
    string bin;
    while(t--){
        int n;
        cin >> n;
        map <string, int> mp;
        mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;
        //1e9 initializes it

        for(int i = 0; i < n; i++){
                cin >> book >> bin;
                mp[bin] = min(mp[bin],book);

                }
        //checks if its equal to 1e9 initializes, meaning only one skill / no skill has been learned from the books
        if(min(mp["01"] + mp["10"], mp["11"]) >= (int)1e9){
            cout << -1 << "\n";
        }else {
        cout << min(mp["01"] + mp["10"], mp["11"]) << "\n";
        }


    }
}

