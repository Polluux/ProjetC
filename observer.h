#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
    public:
        virtual void actualiser() = 0;

        virtual ~Observer() {}
};


#endif // OBSERVER_H
