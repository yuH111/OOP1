#include <iostream>
#include <cstring>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    Time(const Time &other) : hours(other.hours), minutes(other.minutes), seconds(other.seconds) {}

    void output()
    {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};
main(){
//Time t1; 
  // t1.output();
Time t2(10, 30, 45); 
    t2.output();
//Time t3 = t2; 
  // t3.output();
}
