#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

//Looked at editorials bc I was NOT cooking. Learned what a map is though
//auto specifier makes it compatible with the range-expression type
int main()
{
    int n;
    cin >> n;
    while(n--){
        string value;
        cin >> value;
        map < char, int > p;

        for(auto num : value){
            //adds num into map
            p[(num)]++;

        }
        int size = p.size();

        if (size == 1){
            cout << -1 << endl;
        } else if (size == 2 && (p[value[0]] == 1|| p[value[0]] == 3) ){

            cout << 6 << endl;

        } else {

            cout << 4 << endl;


        }

        //so basically, p[value[0]] just returns how many times
        // the number from value[0]] occurs in the map (string)





    }




}


///// my other (failed) submission
//
//#include <iostream>
//#include <sstream>
//#include <string>
//
//using namespace std;
//
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    int counter = 0;
//    int notSame = 0;
//    int same= 0;
//
//
//    while (counter < n){
//
//        string value;
//        cin >> value;
//
//        stringstream tmp;
//        tmp << value;
//        for (int i = 0; i < value.length(); i++){
//            char digit = (tmp.str())[i];
//            char nextDigit = (tmp.str())[i+1];
//            if(!(digit == nextDigit)){
//                notSame++;
//            } else {
//                same++;
//
//            }
//
//        }
//
//        if (notSame == 4){
//            cout << 4 << endl;
//        }
//        else if (notSame == 3){
//            cout << 6 << endl;
//
//        }
//        else if (notSame == 1){
//            cout << -1 << endl;
//        }
//
//
//
//        notSame = 0;
//        same = 0;
//
//
//
//
//
//        counter++;
//    }
//
//
//
//
//}
