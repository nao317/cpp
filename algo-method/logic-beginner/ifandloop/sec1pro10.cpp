/* FizzBuzzの判定部分 */

#include <iostream>

using namespace std;

int main(void) {
    
    int n; // 正の整数 N 
    cin >> n; // input

    if (n % 3 == 0 && n % 5 == 0) { // nが3の倍数かつ5の倍数であるとき
        
        cout << "FizzBuzz" << endl;

    } else {

        if (n % 3 == 0) { // 3の倍数であるとき

            cout << "Fizz" << endl;

        } else if (n % 5 == 0) { // 5の倍数であるとき

            cout << "Buzz" << endl;

        } else { // どの条件にも当てはまらないとき

            cout << n << endl;

        }
    }

    return 0;
    
}