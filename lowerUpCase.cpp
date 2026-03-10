#include <iostream>
#include <string>
using namespace std;

void toUpperCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        else if (str[i] >= 'а' && str[i] <= 'я')
            str[i] = str[i] - 'а' + 'А';
    }
}

void toLowerCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
        else if (str[i] >= 'А' && str[i] <= 'Я')
            str[i] = str[i] - 'А' + 'а';
    }
}

int main() {
    string s1 = "BaD InFo";
    string s2 = "sSh Aes RSa keygEn";
    string s3 = "HEllO PEOple";

    cout << "Вводные данные:" << endl;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl << endl;
    string s1_up = s1, s2_up = s2, s3_up = s3;
    toUpperCase(s1_up);
    toUpperCase(s2_up);
    toUpperCase(s3_up);
    string s1_low = s1, s2_low = s2, s3_low = s3;
    toLowerCase(s1_low);
    toLowerCase(s2_low);
    toLowerCase(s3_low);
    cout << "После верхнего регистра:" << endl;
    cout << "s1_up: " << s1_up << endl;
    cout << "s2_up: " << s2_up << endl;
    cout << "s3_up: " << s3_up << endl << endl;
    cout << "После нижнего регистра:" << endl;
    cout << "s1_low: " << s1_low << endl;
    cout << "s2_low: " << s2_low << endl;
    cout << "s3_low: " << s3_low << endl;

    return 0;
}
