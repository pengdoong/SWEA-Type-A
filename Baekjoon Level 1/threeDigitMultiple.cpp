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

/*  that was a pretty dumb solution

#include <iostream>

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << a * (b % 10) <<"\n";
    std::cout << a * (b % 100 / 10) <<"\n";
    std::cout << a * (b / 100) <<"\n";
    std::cout << a * b << "\n";
}
} */