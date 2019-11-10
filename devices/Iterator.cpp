//
// Created by demid5 on 07.11.2019.
//

#include "Iterator.h"
#include <iostream>
#include "Devices.h"

DeviceIterator::DeviceIterator(Device *device) {
    this->concreteCollection = device;
}

void DeviceIterator::first() {
    st.push(concreteCollection);
}

bool DeviceIterator::hasNext() {
    return !st.empty();
}

void DeviceIterator::next() {
    Device *curItem = currentItem();
    st.pop();
    if (curItem->getChild()) {
        for (Device* elem: *curItem->getChild()) {
            st.push(elem);
        }
    }
}

Device* DeviceIterator::currentItem() {
    return st.top();
}
