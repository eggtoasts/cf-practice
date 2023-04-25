#include <iostream>
#include <string>

using namespace std;


int main()
{
    int n, a, answer, counter;
    string questions;
    cin >> n;
    a, answer = 0;

    counter = 0;

    while(counter < n + 1){
        getline(cin, questions);
        for (char num : questions){
            if(num == '1'){
                a++;
            }
            }
            if( a >= 2){
                answer++;
            }
            a=0;
            counter++;
        }

        cout << answer;
        
        
    



}
