// 2017-like Number

#include <iostream>
#include <vector>

using namespace std;

void eratosthenes() int main()
{

    int n = 110000;
    vector<int> isprime(n, 1);
    isprime[0] = 0;
    isprime[1] = 1;

    for (int i = 0; i < n; i++)
    {
        if (!isprime[i])
        {
            continue; // すでに素数と判定されいているか否かを確認
        }
        for (int j = i * 2; j < n; j += i)
        {
            isprime[j] = 0;
        }
    }

    vector<int> a(n,0)
}