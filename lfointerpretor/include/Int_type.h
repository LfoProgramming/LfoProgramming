#ifndef INT_TYPE_H
#define INT_TYPE_H

#include "Type.h"
#include <memory>

class Int_type : public Type
{
    std::shared_ptr<int> holder;
    public:
        Int_type();

    ///returns the size in bytes
     size_t getSize();

    ///returns the content
     void *getcontent();

};

class Void_type : public Type
{
    public:
       Void_type();

        size_t getSize(){return 0;}

        void *getcontent(){return nullptr;}
};




#endif // INT_TYPE_H
