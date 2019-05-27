#include <iostream>
using namespace std;


#define WEBRTC_MAC 1 //必须要定义
#include "byteorder.h"

int main()
{
    if(rtc::IsHostBigEndian()){
        cout << "BigEndian" << endl;
    }
    else{
        cout << "LittleEndian" << endl;
    }

    return 0;
}
