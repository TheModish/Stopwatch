#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
void DisplayTime(int hours,int minutes,int seconds){
    system("class");
    cout<<hours<<":"
        <<minutes<<":"
        <<seconds;
}
int main() {
    int hours=0,minutes=0,seconds=0;
    DisplayTime(hours,minutes,seconds);
    while(true){
        this_thread::sleep_for(1s);
        seconds++;
        if(seconds>59){
            minutes++;
            seconds=0;
        }
        if(minutes>59){
            hours++;
            minutes=0;
            seconds=0;
        }

        DisplayTime(hours,minutes,seconds);
    }
    return 0;

}