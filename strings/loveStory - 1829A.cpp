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






