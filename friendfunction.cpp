#include <iostream>
using namespace std;

class Test{
    int x;
    friend void fun();
};

void fun(){
    Test obj;
    obj.x = 20;
    cout<<obj.x;
}

int main(){
    fun();
};