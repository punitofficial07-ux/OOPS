#include <iostream>
using namespace std;
class Car
{
private:
    bool engineOn;
    int speed;
public:
    Car(){
        engineOn = false;
        speed = 0;
    }
    void Start(){
        engineOn = true;
        speed += 20;
        cout<<"Car is Start..."<<endl;
    }
    void Stop(){
        engineOn = false;
        speed = 0;
        cout<<"Car is Stopped..."<<endl;
    }
    void Accelator(){
        if(engineOn){
            cout<<"Engine is On"<<endl;
            cout<<"Speed :"<<speed<<"km/h"<<endl;
        }
        else{
            cout<<"The Engine is not start"<<endl;
        }
    }
    void DisplayStatus(){
        cout<<"\nCar Status"<<endl;
        cout<<"Engine is "<<(engineOn ? "on":"off")<<endl;
        cout<<"Speed is :"<<speed<<endl;
    }
};
int main(){
    Car TATA;
    TATA.DisplayStatus();
    TATA.Accelator();
    TATA.Start();
    TATA.Accelator();
    TATA.DisplayStatus();
    TATA.Stop();
    TATA.DisplayStatus();
    TATA.Accelator();
}