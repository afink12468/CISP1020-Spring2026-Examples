#include "locale.h"

// Parameterized constructor
Locale::Locale(string lang, char curr, int tz) {
    language = lang;
    currencySymbol = curr;
    timeZone = tz;
}

// Setters
void Locale::setLanguage(string lang) {
    language = lang;
}

void Locale::setCurrencySymbol(char curr) {
    currencySymbol = curr;
}

void Locale::setTimeZone(int tz) {
    if(tz >= 0 && tz <= 300) {
        timeZone = tz;
    } else {
        timeZone = 0;
    }
}