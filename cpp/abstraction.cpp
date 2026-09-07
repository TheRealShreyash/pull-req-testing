#include <iostream>
#include <string>

using namespace std;

class Tea
{
public:
    virtual void prepareIngredients() = 0; // pure virtual function
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// Derived class

class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Tea Leaves and Water are ready" << endl;
    }
    void brew() override
    {
        cout << "MasalaTea brewed" << endl;
    }
    void serve() override
    {
        cout << "MasalaTea served!" << endl;
    }
};
class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green Leaves and Water are ready" << endl;
    }
    void brew() override
    {
        cout << "GreenTea brewed" << endl;
    }
    void serve() override
    {
        cout << "GreenTea served!" << endl;
    }
};

int main()
{
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}