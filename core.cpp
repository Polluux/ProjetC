#include "core.h"
#include <cstddef>

using namespace std;

Core::Core()
{
    mode2_ = (nullptr);
}

void Core::changeMode(CompMode *mode){
    mode2_ = shared_ptr<CompMode> (mode);
}

bool Core::start(){
    if(mode2_ != nullptr){
        return true;
    }else{
        return false;
    }
}

Core::~Core(){}
