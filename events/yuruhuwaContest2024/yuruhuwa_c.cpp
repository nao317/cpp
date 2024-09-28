
#include <iostream>

using namespace std;

long euclid(long kxup, long kxdown)
{

    long r;

    while (kxup != 0)
    {
        r = kxdown % kxup;
        kxdown = kxup;
        kxup = r;
    }
    long div = kxdown;
    return div;
}

int main()
{

    long a, b, k, n;

    cin >> a >> b >> k >> n;

    long kxup = a, kxdown = b;

    for (long i = 0; i < n; i++)
    {

        if ((kxup * k) < kxdown)
        {

            kxup = kxup * k;
        }
        else
        {

            long empty = kxup * k;
            kxup = kxdown;
            kxdown = empty;
        }
    }

    long div = euclid(kxup, kxdown);

    cout << kxup / div << " " << kxdown / div << endl;

    return 0;
}