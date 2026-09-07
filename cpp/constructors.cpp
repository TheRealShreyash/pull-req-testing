#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    // string teaName;
    string *teaName;
    int servings;
    vector<string> ingredients;

    Chai(string name, int serve, vector<string> ingr)
    {
        // teaName = name;
        teaName = new string(name);
        servings = serve;
        ingredients = ingr;
        cout << "Param constructor called" << endl;
    }

    Chai(const Chai &other)
    {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy constructor called" << endl;
    }

    ~Chai()
    {
        delete teaName;
        cout << "[DESTRUCTOR] Memory cleared." << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << *teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << ", ";
        }

        cout << endl;
    }
};

int main()
{
    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});

    lemonTea.displayChaiDetails();

    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified lemon tea";

    cout << "Lemon Tea" << endl;
    lemonTea.displayChaiDetails();
    cout << "Copied Tea" << endl;
    copiedChai.displayChaiDetails();
    return 0;
}