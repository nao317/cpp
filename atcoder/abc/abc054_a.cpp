/* A - One Card Poker */

#include <iostream>

using namespace std;


// display "Alice"
void say_Alice () {
    cout << "Alice" << endl;
    exit(0);
}
// display "Bob"
void say_Bob () {
    cout << "Bob" << endl;
    exit(0);
}
// display "Draw"
void say_Draw () {
    cout << "Draw" << endl;
}

int main(void) {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        say_Draw();
    } else if (a < b && a != 1) {
        say_Bob();
    } else if (a > b && b != 1) {
        say_Alice();
    } else if (a == 1) {
        say_Alice();
    } else if (b == 1) {
        say_Bob();
    }
}