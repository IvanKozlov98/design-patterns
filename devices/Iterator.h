#ifndef COFEEAUTOMAT_ITERATOR_H
#define COFEEAUTOMAT_ITERATOR_H
#include <stack>
#include <queue>

class Device;
class Iterator {
public:
    virtual void first() = 0;
    virtual bool hasNext() = 0;
    virtual void next() = 0;
    virtual Device* currentItem() = 0;
};


class DeviceIterator : public Iterator {
public:
    DeviceIterator(Device*);
    virtual void first();
    virtual bool hasNext();
    virtual void next();
    virtual Device *currentItem();
private:
    std::stack<Device*>st;
    Device *concreteCollection;
};

/*

class NullIterator : public Iterator {
    // virtual void first();
    virtual bool hasNext();
    virtual void next();
   // virtual Device* currentItem();
};
*/


#endif //COFEEAUTOMAT_ITERATOR_H
