#include <iostream>
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

         //The name of the ip is now put into the map
         mp[ip]=name;
    }

    for (int i = 0; i<m; i++){
         cin >> name >> ip;
         
         
        //now you input a new ip, it will now check mp[ip]
        // and return the name of the corresponding ip
         cout << name << " " << ip << " #" << mp[ip] << endl;
    }



   }


   // other FAILED try bc i always think so complicatedly
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







