#include <iostream>
#include <string>


using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 0, count = 0;
    cin >> n;


    for (int i = 0; i < n; ++i) {

        string str;
        cin >> str;
        
        bool arr[26] = {};


        bool check = true;

        for (int j = 1; j < str.size(); ++j) {
            if (str[j - 1] != str[j]) {
                arr[int(str[j - 1]) - 'a'] = true;

                if (arr[int(str[j]) - 'a'] == true) {
                    check = false;
                }
            }

        }

        if (check)
            ++count;
    }

    cout << count << '\n';

    return 0;
}


// honestly, i'm not proud of this