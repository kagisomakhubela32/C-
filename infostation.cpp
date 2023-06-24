#include "infostation.h"
#include <cstdlib>
#include <string>


using namespace std;

InfoStation::InfoStation()
{

}

float InfoStation::getTemp()
{
  return rand() % 100 + 1;
}

float InfoStation::getHour()
{
 return rand() % 24 + 1;
}

string InfoStation::getDay()
{
    string days[10]={"1","2","3","4","5","6","7","8","9","10"};

    return days[rand() % 9 + 1];
}
