#include <iostream>
using namespace std;

class Games
{
public:
    Games()
    {
        cout << "Come here to Games Community " << endl;
    }
    void Freefire()
    {
        cout << "Welcome Brother to Freefire community" << endl;
    }
    void Pubg()
    {
        cout << "Welcome Brother to Pubg community" << endl;
    }
    void CallOfDuty()
    {
        cout << "Welcome Brother to Call of Duty community" << endl;
    }
    void Clashofclans()
    {
        cout << "Welcome Brother to Clash of Clans community" << endl;
    }
};
int main()
{
    Games punit;
    int choice;
    cout << "1.Freefire\n2.Pubg\n3.Call of Duty\n4.Clash of Clans\n5.Exit" << endl;
    do
    {
        cout << "Just Tell me What did you like to Play: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            punit.Freefire();
            break;
        case 2:
            punit.Pubg();
            break;
        case 3:
            punit.CallOfDuty();
            break;
        case 4:
            punit.Clashofclans();
            break;
        case 5:
            cout << "Thank you for Visiting our Community" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 5);
}
