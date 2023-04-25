#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0;
    int length;

    while(counter < n){

        string word;
        cin >> word;

        if(word.length() <= 10){
            cout<< word << endl;
        } else {

            length = word.length() - 2;

            word = word[0] + to_string(length) + word[word.length()-1];

            cout << word << endl;
        }

        counter++;

    }








}
