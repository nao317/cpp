/* うるう年判定 */

#include <iostream>

using namespace std;

// "Yes"と出力・終了
void say_yes() {
    cout << "Yes" << endl;
    exit(0);
}

// "No"と出力・終了
void say_no() {
    cout << "No" << endl;
    exit(0);
}
int main(void) {
    int n; // 西暦 n 
    cin >> n; // 入力
    
    if (n % 4 == 0) { // 4の倍数のとき
        
        if (n % 100 == 0 && n % 400 != 0) { // 100の倍数であるとき
            
            say_no();

        } else if (n % 400 == 0) {
            
            say_yes();

        } else {

            say_yes();

        }
    } else {
        
        say_no();
        
    }
}