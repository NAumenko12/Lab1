#include <iostream>
#include <string>
#include <clocale>

using namespace std;

void toUpperCase(wstring& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= L'a' && str[i] <= L'z') {
            str[i] = str[i] - L'a' + L'A';
        }
        else if (str[i] >= L'а' && str[i] <= L'я') {
            str[i] = str[i] - L'а' + L'А';
        }
        else if (str[i] == L'ё') {
            str[i] = L'Ё';
        }
    }
}

void toLowerCase(wstring& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= L'A' && str[i] <= L'Z') {
            str[i] = str[i] - L'A' + L'a';
        }
        else if (str[i] >= L'А' && str[i] <= L'Я') {
            str[i] = str[i] - L'А' + L'а';
        }
        else if (str[i] == L'Ё') {
            str[i] = L'ё';
        }
    }
}

int vowelsLength(wstring& str) {
    wstring vowels = L"АЕЁИОУЫЭЮЯаеёиоуыэюяAEIOUYaeiouy";
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        wchar_t c = str[i];
        bool isVowel = false;

        for (int j = 0; j < vowels.length(); j++) {
            if (c == vowels[j]) {
                isVowel = true;
                break;
            }
        }

        if (isVowel) {
            count++;
        }
    }
    return count;
}
// 12312
int main() {
    setlocale(LC_ALL, ""); 
    wcin.imbue(locale());


    wstring userString;
    wcout << L"String: ";
    getline(wcin, userString);
    wcout << L"You entered: " << userString << endl;

    toUpperCase(userString);
    wcout << L"To upper case: " << userString << endl;

    toLowerCase(userString);
    wcout << L"To lower case: " << userString << endl;

    int vowelsCount = vowelsLength(userString);
    wcout << L"Vowels length: " << vowelsCount << endl;
    return 0;
}