#include <iostream>

using namespace std;

class Chai
{
private:
    string teaName;
    int servings;

public:
    Chai(string name, int serve)
    {
        teaName = name;
        servings = serve;
    }

    friend bool compareServings(const Chai &chai1, const Chai &chai2);

    void display() const
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
    }
};

bool compareServings(const Chai &chai1, const Chai &chai2)
{
    return chai1.servings > chai2.servings;
}

int main()
{
    Chai masalaChai("Masala Chai", 5);
    Chai gingerTea("Ginger Tea", 2);

    gingerTea.display();
    masalaChai.display();

    if (compareServings(masalaChai, gingerTea))
    {
        cout << "Masala chai has more servings" << endl;
    }
    else
    {
        cout << "Ginger chai has more servings" << endl;
    }
    return 0;
}