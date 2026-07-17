#include <iostream>
using namespace std;
enum Game
{
    FreeFire ,
    Pubg ,
    ClashOfClans ,
    CallOfDuty 
};
int main()
{
    enum Game g1;
    cout<<"1.Free Fire=1\n2.Pubg=2\n3.Clash of Clans=3\n4.Call of Duty=4"<<endl;
    cout << "Enter the game you want to play: ";
    int choice;
    cin >> choice;
    g1 = (Game)choice;
    switch (g1)
    {
    case 1:
        cout << "You have selected Free Fire" << endl;
        break;
    case 2:
        cout << "You have selected Pubg" << endl;
        break;
    case 3:
        cout << "You have selected Clash of Clans" << endl;
        break;
    case 4:
        cout << "You have selected Call of Duty" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}