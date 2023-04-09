#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    string name, ip;

    map <string, string> mp;

    for(int i = 0; i < n; i++){
         cin >> name >> ip;
         ip+= ";";
         mp[ip]=name;

    }

    for (int i = 0; i<m; i++){
         cin >> name >> ip;

         cout << name << " " << ip << " #" << mp[ip] << endl;
    }



   }


   // other try
//   int n, m;
//   cin >> n >> m;
//   int counter = n+m;
//
//   while ( counter--){
//    string name;
//    string ip;
//    cin >> name >> ip;
//
//    map <string, string> myMap;
//    myMap.insert(pair<string,string>(name, ip));
//    for ( auto l : myMap){
//        string ip2 = l.second;
//        if (myMap.find(ip2) == myMap.end()){
//            cout << l.second << "#"<< l.first << endl;
//        }
//
//        }
//
//    }









