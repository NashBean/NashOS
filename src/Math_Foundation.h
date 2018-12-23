//
//  Math_Foundation.h
//  Get cureent version off Github:
//  https://github.com/NashBean/NashOS/blob/master/Math_Foundation.h
//
//  Created by nash(https://github.com/NashBean) on December 20, 2018.
//  Copyright 2018, 2019 iBean Software(https://iBeanSoftware.github.io),
//  All rights reserved.
//   iBeanSoftware@GMail.com
//-------------------------------------------------------------------------
//  Will be core math stucts and functions for NashOS
//-------------------------------------------------------------------------

#ifndef iBS_Math_Foundation_h
#define iBS_Math_Foundation_h

#include <vector>
#include <sstream>
//#include <fstream>

const int Math_Foundation_MAJOR_VERSION = 0;
const int Math_Foundation_MINOR_VERSION = 1;

namespace iBS 
{
  #define digit uint8_t
  
  struct real_number
  {
    real_number():ref(1){zero();};
    ~real_number(){if(ref.size()) ref.clear();};
    
    void set(short v){};
    void set(long v){};
    void set(float v){};
    void set(double v){};
    void set(long long int v){};
    
    bool  is_signed()
    {
        if(ref.size()==0) return false;
        else if(ref[0]=='+'||ref[0]=='-') return true;
        else    return false;
    };   

    std::string str()
    {
        if(!ref.size()) { return ""; }
        std::stringstream result;
        try { for (size_t i=0; i<ref.size(); ++i) 
            { result<< char(ref[i]); } } 
        catch (...) { return "read number error"; }
        return result.str();
    };
    void zero(){if(ref.size()==1) {ref[0]='0';} else {if(ref.size()) ref.clear(); ref.push_back('0');}}
    
    private:
    size_t dec_index;
    std::vector<digit> ref;
  };
  
  public void add(real_number& n1, real_number& n2)
  {
    //todo
  }

}
#endif // iBS_Math_Foundation_h
