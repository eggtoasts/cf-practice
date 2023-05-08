using namespace std;

#https://codeforces.com/contest/1829/problem/A

int main()
{
    int n;
    int num;
    cin >> n;
    while(n--){
        int i = 0;
        string s;
        string str = "codeforces";
        cin >> s;
        while( i < 10){
            if(str[i]!= s[i]){
                    num++;


            }
             i++;
        }
        cout << num << "\n";
        num = 0;
    }
}


##---------------this is what i thought at first, also worked but its slower but like 20 ms

using namespace std;



int main()
{
    int num = 0;
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int i = 0;
        string str = "codeforces";
        for (char x : str){
            if(s[i] != x){
                num++;

              }
            i++;
            }
        cout << num << "\n";
        num = 0;


        }



    }













