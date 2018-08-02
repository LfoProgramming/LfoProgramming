#ifndef TYPE_H
#define TYPE_H
#include <string>

class Type
{
    public:
        Type();
    //std::string name="";


    ///returns the size in bytes
    virtual size_t getSize()=0;

    ///returns the content
    virtual void *getcontent()=0;

};





#endif // TYPE_H
