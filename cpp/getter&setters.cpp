#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    Chai()
    {
        teaName = "Unknown Tea";
        servings = 1;
        ingredients = {"water", "tea leaves"};
    }
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }

    // getter
    string getTeaName()
    {
        return teaName;
    }

    int getServings()
    {
        return servings;
    }

    vector<string> getIngredients()
    {
        return ingredients;
    }

    // setter
    void setTeaName(string name)
    {
        teaName = name;
    }

    void setServings(int serve)
    {
        servings += serve;
    }

    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
    }
};

int main()
{

    Chai chai;
    chai.setTeaName("Ginger Tea");
    chai.setServings(2);
    chai.setIngredients({"water", "tea leaves", "ginger", "milk"});
    return 0;
}