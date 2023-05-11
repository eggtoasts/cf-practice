
using namespace std;


bool re(int gold, int ans){
    if(gold == ans){
        return true;
    } else if (gold % 3 != 0){
        return false;
    } else {
        return re(gold/3, ans) || re(gold * 2 / 3, ans);
    }
}


int main(){
    int n;
    cin >> n;
    int gold;
    int ans;

    while (n--){
        cin >> gold >> ans;
        cout << (re(gold, ans) ? "YES" : "NO") << '\n';


    }


