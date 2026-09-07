#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }

    return total;
}

int main()
{
    int chaiTemperature[] = {86, 85, 92, 100};

    cout << "Chai Temperature" << endl;
    for (int temperature : chaiTemperature)
    {
        cout << temperature << ", ";
    }

    cout << endl;

    int chaiServed[7] = {50, 20, 30, 40, 90, 80, 60};
    int total = totalChaiServed(chaiServed, 7);
    cout << total << endl;

    int chaiSales[3][7] = {
        {1, 2, 3, 4, 5, 6, 7},
        {100, 90, 80, 70, 60, 50, 40},
        {10, 20, 30, 40, 50, 60, 70},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << chaiSales[i][j] << " cups" << endl;
        }
    }
    return 0;
}