#include <iostream>
#include <iomanip>
#include <climits>
#include <cfloat>

using namespace std;

/*
Zahlen, Variable, ...
- es gibt ganze Zahlen
- es gibt Fließkommazahlen
- Variablen besitzen einen Datentyp: 
    - int für ganze Zahlen
    - double für Fließkommazahlen
- Variablennamen: 
    - Beginnen mit Buchstaben/Unterstrich. Nachfolgend können auch Zahlen kommen.
    - es wird zwischne Groß- und Kleinschreibung unterschieden
    - nicht erlaubt sind: Schlüsselwörter in c++, Umlaute,
*/
void block1() {
    // Deklaration: Wie machen die Variablen dem Programm bekannt.
    int _am0unt;
    double price;

    // Zuweisung
    _am0unt = 2;
    price = 1.45;

    cout << "amount: " << _am0unt << endl;
    cout << "price: " << price << endl;
    cout << "\n\n" <<endl;
}

/*
Operatoren
- es gelten die Punkt vor Strich Regel usw. Ich gehe darauf nicht weiter ein.
- wenn bei der Deklaration einer Variable der Wert bekannt ist, 
wird diese Zuweisung auch Initialisierung genannt.
*/
void block2() {
    int amountApple = 2, amountPear = 4;
    double price_apple = 1.45, price_pear = 0.85;
    double sum, average, percentage, difference;

    sum = amountApple * price_apple + amountPear * price_pear;
    average = sum / (amountApple + amountPear);
    percentage = 100 * amountPear / (amountApple + amountPear);
    difference = price_apple - price_pear;

    cout << "sum €: " << sum << endl;
    cout << "average €: " << average << endl;
    cout << "percentage %: " << percentage << endl;
    cout << "difference €: " << difference << endl;
    cout << "\n\n" <<endl;
}

/*
Formatieren mit Manipulatoren
- fixed: Dient zur Einstellung der dezimalen Notation. 
Wirkt sich maximal für den restlichen Verlauf des Programms.
- setpresiction: Nach der Angabe von fixed, kann damit die Anzahl der Stellenzahl gerundet bestimmt werden.
*/
void block3() {
    double pi = 3.141;
    cout << pi << endl;
    cout << setw(8) << pi << endl;

    cout << setfill('.');
    cout << setw(8) << pi << endl;

    cout << fixed << setprecision(2);
    cout << setw(8) << pi << endl;

    cout << left;
    cout << setw(8) << pi << endl;

    cout << "\n\n" <<endl;
}

/*
Zuweisungen kürzer schreiben
- Inkrement Operator ++ 
- Dekrement Operator -- 
- Zuweisungsoperatoren: +=, -=, *=, /=
*/
void block4() {
    int amount = 2; cout << amount << endl;
    amount += 5; cout << amount << endl;
    amount -= 5; cout << amount << endl;
    amount = ++amount; cout << amount << endl;  // Zuweisung erfolgt nach der Erhöhung
    amount = amount--; cout << amount << endl;  // Zuweisung erfolgt vor der Erhöhung. Ergebnis = 3
    amount = --amount; cout << amount << endl;  // Zuweisung erfolgt nach der Erhöhung. Ergebnis = 2
    cout << "\n\n" <<endl;
}

/*
Speicherung von Zahlen
- Datentypen für ganze Zahlen: char, short, int, long
- Bezeichnung unsigned (vorzeichenlos= 0 und positiver Wert; doppelt so großer Wertebereich) und signed
- sizeof liefer den Speicherbedarf des Datentyps oder Variable in Byte
- C++ bietet Systemkonstanten an
- dazu importieren wir climits

- Datentypen für Fließkomma Zahlen: float, double, long double
- cfloat
*/
void block5() {
    cout << "char " << sizeof(char) << " byte von " << CHAR_MIN << " bis " << CHAR_MAX << endl;
    cout << "unsigned char " << sizeof(unsigned char) << " byte von 0 bis " << UCHAR_MAX << endl;
    cout << "short " << sizeof(short) << " byte von " << SHRT_MIN << " bis " << SHRT_MAX << endl;
    cout << "int " << sizeof(int) << " byte von " << INT_MIN << " bis " << INT_MAX << endl;
    cout << "unsigned int " << sizeof(unsigned int) << " byte von 0 bis " << UINT_MAX << endl;
    cout << "long " << sizeof(long) << " byte von " << LONG_MIN << " bis " << LONG_MAX << endl;
    cout << "unsigned long " << sizeof(unsigned long) << " byte von 0 bis " << ULONG_MAX << endl;
    cout << "\n\n" <<endl;
    /*
    char 1 byte von -128 bis 127
    unsigned char 1 byte von 0 bis 255
    short 2 byte von -32768 bis 32767
    int 4 byte von -2147483648 bis 2147483647
    unsigned int 4 byte von 0 bis 4294967295
    long 4 byte von -2147483648 bis 2147483647
    unsigned long 4 byte von 0 bis 4294967295   // je nach Compilter kann long auch 8 Byte haben.
    */

    cout << "float " << sizeof(float) << " byte von " << FLT_MIN << " bis " << FLT_MAX << endl;
    cout << "double " << sizeof(double) << " byte von " << DBL_MIN << " bis " << DBL_MAX << endl;
    cout << "long double " << sizeof(long double) << " byte von " << LDBL_MIN << " bis " << LDBL_MAX << endl;
    cout << fixed << setprecision(30);
    cout << "1/7 in float: " << 1.0f / 7 << endl;
    cout << "1/7 in double: " << 1.0 / 7 << endl;
    cout << "1/7 in long double: " << 1.0L / 7 << endl;    

    // Exponentialschreibweise: 5.2e3 = 5.1 * 10³ = 5.2 * 1000 = 5200
    cout << 5.2e3 << endl;  // 5200.000000000000000000000000000000
    cout << 5.2e-3 << endl; // 0.005199999999999999800000000000

    cout << "\n\n" <<endl;
}

/*
Feste Werte in Konstanten speichern
- const: Definition einer Konstante.
*/
void block6() {
    const double PI = 3.1415;
    // PI = 4.2;
    double radius = 2.1;
    // circumference = Kreisumfang
    double circumference = 2 * PI * radius;

    cout << fixed << setprecision(3);
    cout << circumference <<endl;

    cout << "\n\n" <<endl;
}

/*
Konstanten in Enumeration.
- ein Enum ist ein ganzzahliger Datentyp.
- falls kein initial Wert angegeben wird, wird von 0,1,2 ausgegangen.
- ansonsten vom letzten definierten Wert hochzählend. 
*/
void block7() {
    enum color {RED, GREEN, BLUE=7, ALPHA}; // 0, 1, 7, 8
    color co;
    co = GREEN;
    cout << co << endl;
    co = ALPHA;
    cout << co << endl;

    cout << "\n\n" <<endl;
}

/*
Verzweigungen
- Schlüsselwort if
- if leitet eine Verzweigung ein
- Bedingung: in runden Klammern steht die Bedingung
- Wahrheitswert: das Ergebnis der Bedigung ist ein Wahrheitswert
*/
void block8() {
    double pi = 3.14;
    int radius = 7;

    // einfache Verzweigung
    if(pi > 1.5) {
        cout << "pi is higher then 1.5" << endl;
    } else {
        cout << "pi is lower then 1.5" << endl;
    }

    // Falls nur eine Anweisung, dann sind geschweifte Klammern nicht nötig.
    if(pi > 1.5)
        cout << "pi is higher then 1.5" << endl;
    
    // Vergleichsoperatoren: >, <, >=, <=, ==, !=
    if(radius == 7) // nur ganze Zahlen können auf Gleichheit / Ungleichheit verglichen werden.
        cout << "radius ist gleich 7" << endl;
    if(radius != 8)
        cout << "radius ist ungleich 8" << endl;
    if(radius >= 7)
        cout << "radius ist größer gleich 7" << endl;

    // geschachtelte Verzweigung
    if(radius > 1) {
        if(radius < 8) {
            cout << "radius liegt zwischen 1-8" << endl;
        }
    } else {
        cout << "radius nicht größer als 1" << endl;
    }

    // Mehrfache Verzweigung
    if(radius < 1)
        cout << "kleiner 1" << endl;
    else if(radius < 8)
        cout << "kleiner 8 bzw. zwischen 1-8" << endl;
    else
        cout << "größer gleich 8" << endl;

    // Bedingungen kombinieren
    if(radius > 1 && radius < 8)
        cout << "radius zwischen 1-8" << endl;
    if( !(radius < 1) )
        cout << "größer 1" << endl;
    if( radius < 1 || radius > 1)
        cout << "radius ist < 1 oder > 1" << endl;
    
    // switch-case Verzweigung
    int month = 3;
    switch(month) {
        case 1:
        case 2:
        case 3:
            cout << "1. quartar" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "2. quartar" << endl;
            break;
        case 7:
        case 8:
        case 9:
            cout << "3. quartar" << endl;
            break;
        case 10:
        case 11:
        case 12:
            cout << "4. quartar" << endl;
            break;
        default:
            cout << "isnt a month" << endl;
    }

    // Wahrheitswerte speichern 
    // Datentyp bool
    bool x;
    x = true; cout << x << endl;    // 1
    x = false; cout << x << endl;   // 0
    x = 0; cout << x << endl;   // 0
    x = -1; cout << x << endl;  // 1

    // bedingter Ausdruck
    int y = x == true ? 42 : -42;
    cout << y << endl;

    cout << "\n\n" <<endl;
}

void blockn() {
    cout << "\n\n" <<endl;
}

int main() {
    block8();
}