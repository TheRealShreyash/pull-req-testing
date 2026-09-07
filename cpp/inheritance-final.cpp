#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base Class
class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "Tea constructor called " << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << endl;
    }
    virtual void serve() const
    {
        cout << "Serving " << servings << "cup of tea with generic method" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "Green tea consturctor called" << endl;
    }

    void brew() const override
    {
        cout << "Brewing" << teaName << " by steeping green tea leaves" << endl;
    }

    ~GreenTea()
    {
        cout << "Green Tea destructor called" << endl;
    }
};

class MasalaChai : public Tea
{
public:
    MasalaChai(int serve) : Tea("Masala Tea", serve)
    {
        cout << "Masala Chai constructor called" << endl;
    }

    void brew() const override final
    {
        cout << "Brewing" << teaName << " with spices and milk" << endl;
    }

    ~MasalaChai()
    {
        cout << "Masala Chai destructor called" << endl;
    }
};

int main()
{
    Tea *tea1 = new GreenTea(2);
    Tea *tea2 = new MasalaChai(2);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
    return 0;
}