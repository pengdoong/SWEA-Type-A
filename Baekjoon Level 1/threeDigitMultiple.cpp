#include <iostream>
#include <string>

using namespace std;

int main () {
    int a;
    string b;
    cin >> a;
    cin >> b;

    int hunnit, tens, ones, ans;
    hunnit = a * int(b[0] - '0');
    tens = a * int(b[1] - '0');
    ones = a * int(b[2] - '0');

    ans = hunnit * 100 + tens * 10 + ones;

    cout << ones << endl << tens << endl << hunnit << endl << ans << endl;


    return 0;
}