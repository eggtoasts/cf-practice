#include <iostream>
#include <sstream>
#include <string>
 
using namespace std;
 
 
 
int main()
{
   int n, k;
   cin >> n >> k;
 
   int a;
   int i;
 
   int arr[n];
 
   for( i = 0; i < n; i++){
        cin >> a;
 
        arr[i] = a;
 
        if(arr[i] == 0){
            cout << i << endl;
            return 0;
        }
 
        if(i >= k){
            if (arr[i] != arr[k-1]){
                    cout << i << endl;
                return 0;
            }
        }
 
 
   }
 
    cout << i << endl;
 
}
 
 
