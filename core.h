#ifndef CORE_H
#define CORE_H

#include "compmode.h"
#include <iostream>
#include <memory>

using namespace std;



class Core
{
public:
    Core();
    void changeMode(CompMode *mode);
    bool start();

    ~Core();

private:
    shared_ptr<CompMode> mode2_;
};

#endif // CORE_H
