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
    int n;
    int current = 0;
    int maximum = 0;
    cin >> n;
    while(n--){
        int j;
        cin >> j;
        int arr[j];

        for(int i = 0; i < j; i++){
            cin >> arr[i];
            if (arr[i] == 0){
                current++;
            } else {

                maximum = max(maximum, current);
                current = 0;
            }
         }
         cout << max(maximum, current) << "\n";

         current = 0;
         maximum = 0;


        }
    }

