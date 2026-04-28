#ifndef LOCALE_H
#define LOCALE_H

#include <iostream>
#include <string>
using namespace std;

class Locale {
private:
    string language;
    char currencySymbol;
    int timeZone;

public:
    // Constructors
    Locale() : language(""), currencySymbol('$'), timeZone(0) { };
    Locale(string lang, char curr, int tz);

    // Getters with inline definitions
    string getLanguage() const { return language; }
    char getCurrencySymbol() const { return currencySymbol; }
    int getTimeZone() const { return timeZone; }

    // Setters
    void setLanguage(string lang);
    void setCurrencySymbol(char curr);
    void setTimeZone(int tz);

    //Declared but not defined
    Locale& operator=( const Locale& );
    friend ostream& operator<<( ostream&, const Locale& );
};

#endif