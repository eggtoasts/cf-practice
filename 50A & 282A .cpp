#include <iostream>
#include <string>

using namespace std;


// ======================[ 50A ]============================

int main()
{
    //m x n squares== dominoes are 2 x 1 squares
    // so if 2 and 4 -- 3 and 3
    // 0 0              0 0 0       0 0 0 0 0
    // 0 0              0 0 0       0 0 0 0 0
    // 0 0              0 0 0       0 0 0 0 0
    // 0 0


    int m, n;

    cin >> m >> n;

    int board_size = (m*n);


    cout << (board_size) / 2;


}

// ======================[ 282A - Bit++ ]============================



int main()
{
    int x = 0;
    int n;
    int counter = 0;
    cin >> n;

    string input;

    string increase = "++";
    string decrease = "--";

    while (counter < n){
        cin >> input;

        if (input.find(increase) != string::npos){
            x++;
    
        }
        else if (input.find(decrease) != string::npos){
            x--;
            cout << x <<endl;
        }
        else {
            return 0;

        }
    counter++;
    }
    cout << x;

    // != String::npos means "no-position".
    //It means that the string was not found in any position.
    //If returns true, that means the string was not found in any of the positions.
    //so if the find() function is not equal to string::npos, it means that the substring was found
}
