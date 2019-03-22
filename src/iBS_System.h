//
//  UTF-8_String.h
//
//
//  Created by nash(https://github.com/NashBean) on 3/22/19.
//  Copyright 2019 iBean Software(https://iBeanSoftware.github.io),
//  All rights reserved.
//

#ifndef iBS_System_h
#define iBS_System_h

#include <UTF-8_String.h>

const int iBS_System_MAJOR_VERSION = 0;
const int iBS_System_MINOR_VERSION = 0;

namespace iBS 
{
    typedef struct system
    {
        uint8_t bits;// 8/16/32/64/exc.
        u8str name;
        u8str version;
        int screen_width;
        int screen_hight;
    }sys;
    
}//end of namespace iBS 

#endif // iBS_System_h
