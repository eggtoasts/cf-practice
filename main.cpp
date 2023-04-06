#include <iostream>
#include <string>

using namespace std;


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
