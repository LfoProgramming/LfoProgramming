#include "Int_type.h"

Int_type::Int_type()
{
    //ctor
}

size_t Int_type::getSize()
{
    return sizeof(int);
}

void* Int_type::getcontent()
{
    return (void*)holder.get();
}
