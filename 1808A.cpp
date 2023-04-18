#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <cmath>
#include <vector>

using namespace std;

// time limit rip

int main()
{
    auto panswer = 0;
    int n;
    int i;
    cin >> n;
    while(n--){
        int a;
        int b;
        int luckiestNum;
        cin >> a >> b;
        for(i = a; i <= b; i++){
            string s = to_string(i);
            auto minimum = *(min_element(s.begin(), s.end()));
            auto maximum = *(max_element(s.begin(), s.end()));
            auto answer = maximum - minimum;
            if (answer >= panswer){
                panswer = answer;
                luckiestNum = i;

            }

        }


        cout << luckiestNum << "\n";
        panswer = 0;
    }




}





