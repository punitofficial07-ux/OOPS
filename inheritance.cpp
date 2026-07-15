#include<iostream>
using namespace std;
class Game{
    public:
    void start(){
        cout<<"Game Started"<<endl;
    }
    void play(){
        cout<<"Game Playing"<<endl;
    }
};
class Cricket:public Game{
    public:
    void start(){
        cout<<"Cricket Started"<<endl;
    }
};
int main(){
    Cricket c;
    c.start();
    c.play();
    return 0;
}