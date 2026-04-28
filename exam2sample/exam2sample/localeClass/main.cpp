#include <iostream>
#include <vector>
#include <iomanip>
#include "locale.h"   // assumes class is already defined

using namespace std;

int main() {
    vector<Locale> locales;

    string language;
    char currency;
    int timezone;
    char done;

    do {
        cout << "Enter locale:\n";

        cout << "Language: ";
        cin >> language;

        cout << "Currency symbol: ";
        cin >> currency;

        cout << "Time zone: ";
        cin >> timezone;

        // Create Locale object and add to vector
        Locale loc(language, currency, timezone);
        locales.push_back(loc);

        cout << "Are you done entering locales? (y/n): ";
        cin >> done;

        cout << endl;

    } while (done != 'y');

    // Output table header
    cout << left;
    cout << setw(15) << "Language"
         << setw(10) << "Currency"
         << setw(10) << "Time Zone" << endl;

    cout << "-----------------------------------------" << endl;

    // Output data
    for (int i = 0; i < locales.size(); i++) {
        cout << setw(15) << locales[i].getLanguage()
             << setw(10) << locales[i].getCurrencySymbol()
             << setw(10) << locales[i].getTimeZone()
             << endl;
    }

    return 0;
}