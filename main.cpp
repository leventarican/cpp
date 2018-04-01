#include <iostream>
#include <iomanip>
#include <climits>
#include <cfloat>
#include <cstdarg>
#include <stdio.h>  // printf
#include <array>
#include <memory>
#include <vector>

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
void section1() {
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
void section2() {
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
void section3() {
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
void section4() {
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
void section5() {
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
    unsigned long 4 byte von 0 bis 4294967295   // je nach compiler, kann long auch 8 Byte haben.
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
void section6() {
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
void section7() {
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
void section8() {
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

/*
Schleifen: for, do-while, while
*/
void section9() {
    // for Schleife (kopfgesteuerte Schleife)
    for(double d=2.0; d<3.1; d+=0.2) {
        cout << d << endl;
    }

    // bereichsbasierte for Schleife (range-based for-loop)
    // range-based 'for' loops are not allowed in C++98 mode
    // for(int number:{10, 25, 15}) {
    //     cout << number << endl;
    // }

    // do-while Schleife wird mindestens einmal aufgerufen
    double pi = 3.14;
    do {
        cout << "pi is between 1-3." << endl;
        break;
    } while(pi < 1 || pi > 3);

    // while Schleife (kopfgesteuert)
    int c = 1;
    while(c < 4) {
        c++;
        if(c==2 || c==4) continue;
        cout << c << endl;
    }

    // geschachtelte Schleifen
    for(int i=1; i<=2; i++) {
        for(int j=1; j<=3; j++) {
            cout << i << " - " << j << endl;
        }
    }

    cout << "\n\n" <<endl;
}

namespace section10 {
    // Funktionen und Parameter (übergeben)
    int addition(int a, int b) {
        return a + b;
    }

    /*
    Referenzen
    - ermöglicht den Zugriff einer Variable unter einem anderen Namen --> veränderliche Referenz
    - den Wert zu ändern ist bei konstanten Referenzen nicht möglich
    - die Nutzung von Referenz spart Ressourcen
    */
    void ref() {
        double pi = 3.14;
        double &piRef1 = pi;
        cout << "pi: " << piRef1 << endl;

        double &piRef2 = piRef1;
        cout << "pi: " << piRef2 << endl;

        const double &piRef3 = pi;   // --> konstante Referenz
        cout << "pi: " << piRef3 << endl;
    }

    int additionEconomic(int &a, int &b) {
        return a + b;
    }

    int additionOptimized(const int &a, const int &b) {
        return a + b;
    }

    /*
    Parameter können auch standartwerte haben. Damit ist es möglich, 
    die Funktion auch ohne Parameter aufzurufen.
    Das geht allerdings nur bei konstanten Referenzen / Variablen.
    */
    int additionDefault(const int &a = 0, const int &b = 0) {
        return a + b;
    }

    /*
    Bei einer variadischen Funktion kann man eine beliebige Menge von Parametern übergeben.
    Am Ende der Parameterliste wird eine sog. Ellipse (...) angegeben.

    Hierzu müssen wir den Header cstdarg inkludieren.
    Hier sind die Makros va_list, ... definiert.
    */
    int additionVariadic(const int &number, ...) {
        int sum = 0;
        va_list list;   // damit greifen wir auf die übergebenen Werte. Ist eigentlich ein Zeiger.
        va_start(list, number); // quasi die Initialisierung
        for(int i=1; i<=number; i++)
            sum += va_arg(list, int);   // das Makro va_arg liefert den nächsten Wert in der Schleife
        va_end(list);    // wir schließen den Zugriff auf die übergebenen Werte
        return sum;
    }

    void thisFunctionCountsItsCall() {
        static int counter = 1; // statische Variablen behalten ihren Wert über die gesamte Laufzeit.
        cout << counter << " times thisFunctionCountsItsCall() was called" << endl;
        counter++;
    }

    /*
    Functionen können auch mehrmals mit dem selben Namen definiert werden.
    Vorraussetzung ist, dass sie sich in der Parameterliste unterscheiden.
    --> Man spricht von Überladene Functionen.
    */
    int addition(int a, int b, int c) {
        return a + b + c;
    }

    /*
    Beispiel für eine rekursive Function. Sie ruft sich selber auf.
    */
    void halve(int &input, int &stop) {
        input = input / 2;
        printf("halve() > %d\n", input);
        if(input > stop)
            halve(input, stop);
    }

    /*
    Funktionen als Parameter -> Funktionszeiger
    Eine Funktion wird während der Laufzeit in den Speicher geladen - wie eine Variable.
    Als Parameter einer Funktion können wir einen Funktionszeiger definieren,
    der auf die Adresse und damit auf die Funktion zeigt. 
    */
    int quad(int a) {
        return a * a;
    }
    int powerThree(int a) {
        return a * a * a;
    }
    int thisFunctionHasOtherFunctionAsParameter(const int &x, int fkt(int a)) {
        cout << fkt(x) << endl;
    }

    /* 
    Rückgabewert einer Funktion 
    - das Schlüsselwort void for dem Namen der Funktion sagt aus, dass nichts zurückgeliefert wird.
    - an der aufrufenden Stelle, kann je nach Rückgabewert entschieden werden, was damit geschieht.
    - das Schlüsselwort return ist für die Rückgabe des Wertes zuständig. Zugleich, beendet es die Funktion.

    Anmerkung: 
    Die Hauptfunktion main liefert auch einen int Rückgabewert, jedoch muss in C++ nicht return aufrufen.
    */

    /*
    Deklaration einer Funktion
    - die main funktion muss unten stehen, sonst kennt es die Funktion unterhalb dessen nicht
    - was man machen kann ist, dass man die Funktion überhalb von main erst mal deklariert.
    - die Deklaration erfordert keinen Namen für die Parameter
    */
    void justDeclaration(const int&);

    void main() {
        cout << "\nsection_a" << endl;
        cout << addition(2, 5) << endl;
        ref();
        int a = 2, b = 5;
        cout << "additionEconomic - " << additionEconomic(a, b) << endl;     // Aufruf mit Werten nicht möglich! Werte können geändert werden.
        cout << "additionOptimized - " << additionOptimized(2, 5) << endl;    // Werte nicht mehr änderbar --> klar.
        cout << "additionDefault - " << additionDefault() << endl;
        printf("additionVariadic - %d\n", additionVariadic(2, 2, 5));
        justDeclaration(7);
        thisFunctionCountsItsCall();
        thisFunctionCountsItsCall();
        cout << addition(2, 5, 1) << endl;
        a = 64, b = 1;
        halve(a, b);
        thisFunctionHasOtherFunctionAsParameter(2, quad);   // Funktion quad als Parameter
        thisFunctionHasOtherFunctionAsParameter(2, powerThree);
    }

    void justDeclaration(const int &a) {
        cout << "main can see this function and also call it. Your param: " << a << endl;
    }
}

/*
Hier geht es um Felder.
In Feldern können Daten desselben Datentyps gespeichert werden.
*/
namespace section11 {

    void einfacheStatischeFelder() {
        double values[3];   // statisches Feld mit drei Elementen des Datentyps double.
        values[0] = 0.42;
        values[1] = 3.14;
        values[2] = 14.53;
        for(int i=0; i<3; i++)
            printf("values[] = %.1lf\n", values[i]);
        for(const double &value : values)
            printf("values[] = %.2lf\n", value);
    }

    // intelligente statische Felder werden mit dem Klassentemplate array erstellt.
    // dazu inkludieren wir array
    void intelligenteStatischeFelder() {
        array<double, 3> values;    // die Werte können auch direkt mit {} initialisiert werden.
        values.at(0) = 0.42;    // mit dem Punkt Operator greifen wir auf die Methode at zu.
        values.at(1) = 3.1415;
        values.at(2) = 14.53;
        // kann sein das vs code hier 'too many initializer values' sagt. Es lässt sich trotzdem kompilieren. 
        array<double,3> values1 = {0.42, 3.1415, 14.53}; 
        // hier sagt vs code nichts.
        array<double,3> values2{ {0.42, 3.1415, 14.53} };

        // size() liefert Datentyp unsigned int. Daher nehmen wir zum Vergleich auch unsigned int.
        for(unsigned int i=0; i<values.size(); i++)
            printf("arrays<> values = %.2lf\n", values.at(i));
        for(const double &value : values1)
            printf("arrays<> values = %.4lf\n", value);
    }

    void change(double *pvalue) {
        *pvalue = *pvalue + 0.01;
    }

    // Zeiger werden eher selten erzeugt, mehr nutzen und deferenzieren von vorhandenen Zeigern.
    void einfacheDynamischeFelder() {
        // zur Erstellung von einfachen dynamischen Felder benötigen wir einen Zeiger.
        // Unterscheidung zwischen einfacher und dynamischer Zeiger.
        double value = 0.42;
        double *valuePointer;   // Zeiger: wir definieren eine Variabe mit dem Datentyp double
        // der Variable weisen wir die Adresse einer Variable des Datentyps double zu
        // mit dem Operator & ermitteln wir die Adresse einer Variable im Speicher
        valuePointer = &value;
        cout << *valuePointer << endl;

        // Dereferenzierung eines Zeigers mit * 
        // Dereferenzierung bedeuetet: Zugriff auf den Wert, auf den der Zeiger zeigt.
        *valuePointer = 3.14;
        cout << value << endl;

        change(&value);
        cout << value << endl;

        change(valuePointer);
        cout << value << endl;
    }

    void operatorenNewDelete() {
        // mit new kann man Speicherplatz anfordern
        // die Adresse des Speicherplatzes wird einem Zeiger zugewiesen
        // mit delete wird der Speicher wieder freigegeben
        double *pi = new double;
        *pi = 3.1415;
        cout << *pi << endl;
        delete pi;

        int *pfield, number = 3;
        pfield = new int[number];    // Speicherplatz für ein einfaches dynamisches Feld von int Variablen anfordern
        for(int i=0; i<number; i++) {
            pfield[i] = 10 * i;
            cout << pfield[i] << " ";
        }
        cout << endl; delete[] pfield;
    }

    // smart pointer
    // automatische Verwaltung der Variablen / Objekte. Damit selbstständige Freigabe des Speicherplatzes.
    // wir inkludieren dazu <memory>
    void intelligenterEindeutigerZeiger() {
        // intelligenter Zeiger auf eine Variable
        unique_ptr<double> pi(new double);
        *pi = 3.14159;
        cout << *pi << endl;

        // intelligenter Zeiger auf einfaches dynamisches int-Feld
        int number = 7;
        unique_ptr<int[]> pfield(new int[number]);
        for(int i=0; i<number; i++) {
            pfield[i] = 10 * i;
            cout << pfield[i] << " ";
        }
        cout << endl;   // kein delete erforderlich
    }

    // mehrere intelligente Zeiger können auf eine Variable / Objekt zeigen
    // der Speicher wird automatisch freigegeben, wenn der letzte Zeiger nicht mehr darauf verweist.
    void sharedPointer() {
        shared_ptr<double> p1(new double);
        *p1 = 3.141592;

        shared_ptr<double> p2(p1);
        printf("%.5lf\n", *p1);
        printf("%.5lf\n", *p2);
    }

    // mit dem Klassentemplate vector aus der Container Bibliothek werden diese erzeugt
    // wir inkludieren dazu <vector>
    void intelligenteDynamischeFelder() {
        vector<int> values;
        values.resize(20);
        
        for(unsigned int i=0; i<values.size(); i++)
            values.at(i) = 10 * i;
        values.push_back(300);  // ohne ein resize zu machen, vergrößern wir das Feld
        cout << values.size() << endl;
        values.resize(23);
        values.at(21) = 301;
        values.at(22) = 302;
        for(const int &value : values)
            cout << value << " ";
        cout << endl;
    }

    void outputArray(const array<int, 2> &values) {
        for(const int &value : values)
            cout << value << " ";
        cout << endl;
    }

    void outputVector(const vector<int> &values) {
        for(const int &value : values)
            cout << value << " ";
        cout << endl;
    }

    // als Kopie des Feld | als veränderliche Referenz | konstante Referenz auf das Feld
    void felderAlsParameter() {
        array<int,2> v1 = { 1, 2 };
        vector<int> v2 = { 1, 2, 3, 5, 8 };
        outputArray(v1);
        outputVector(v2);
    }

    // Beispiel für ein zweidimensionales Feld
    void mehrdimensionalesFeldMitFesterGroesse() {
        cout << endl; array<array<int,7>,3> pField;
        for(unsigned int i=0; i<pField.size(); i++)
            for(unsigned int k=0; k<pField.at(i).size(); k++)
                pField.at(i).at(k) = 10 + i*10 + k;
        for(array<int,7> &row : pField) {
            for(int &value : row)
                cout << value << " ";
            cout << endl;
        }
    }

    void mehrdimensionalesFeldMitVariablerGroesse() {
        cout << endl; 
        vector<vector<int>> pField;   // vor C++11 musste man vector<vector<int> > schreiben (Leezeichen!)
        int rowNumber = 4;
        int columnNumber = 3;

        pField.resize(rowNumber);
        for(unsigned int i=0; i<pField.size(); i++)
            pField.at(i).resize(columnNumber);

        for(unsigned int i=0; i<pField.size(); i++)
            for(unsigned int k=0; k<pField.at(i).size(); k++)
                pField.at(i).at(k) = 10 + i*10 + k;
        for(vector<int> &row : pField) {
            for(int &value : row)
                cout << value << " ";
            cout << endl;
        }
    }
    
    void main() {
        einfacheStatischeFelder();
        intelligenteStatischeFelder();
        einfacheDynamischeFelder();
        operatorenNewDelete();
        intelligenterEindeutigerZeiger();
        sharedPointer();
        intelligenteDynamischeFelder();
        felderAlsParameter();
        mehrdimensionalesFeldMitFesterGroesse();
        mehrdimensionalesFeldMitVariablerGroesse();
    }
}

/*
Fehlerbehanldung / Exception Handling
Während der Laufzeit können damit Fehler abgefangen werden.
*/
namespace section12 {

    // intelligente statische Felder werden mit dem Klassentemplate array erstellt.
    void ausnahmeBehandlung() {
        array<double,3> values{ {0.42, 3.1415, 14.53} };

        try {
            printf("arrays<> values = %.4lf\n", values[5]);
            // nicht reservierter Speicherbereich. D.h. der Inhalt wird lediglich ausgegeben.
            printf("arrays<> values = %.4lf\n", values.at(5));
        } catch(exception &e) {
            cout << "section 12 catched: " << e.what() << endl;
        }

        printf("after exception handling. We are finished.");
    }
    
    void main() {
        ausnahmeBehandlung();
    }
}

void sectionn() {
    cout << "\n\n" <<endl;
}

int main() {
    // section10::main();
    section11::main();
    // section12::main();
}