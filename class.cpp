#include <iostream>
using namespace std;

class Country {
    public:
        string name;
        string capital;
        int population;
        string language;
        string greeting;


        Country() {
            name = "Name";
            capital = "Capital";
            population = 0;
            language = "Language";
            greeting = "Greeting";
        }

        Country(string Name, string Capital, int Population, string Language, string Greeting) {
            name = Name;
            capital = Capital;
            population = Population;
            language = Language;
            greeting = Greeting;
        }

        void greet() {
            cout << greeting << endl;
        }
};


int main()
{
    Country country1("Spain", "Madrid", 47000000, "Spanish", "Saludo");

    Country country2("United States of America", "Washington, D. C.", 328000000, "English", "Hello");


    cout << country1.name << endl;
    country1.greet();

    cout << country2.name << endl;
    country2.greet();

    return 0;
}
