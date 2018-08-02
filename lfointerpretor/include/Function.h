#ifndef FUNCTION_H
#define FUNCTION_H
#include <map>
#include "Type.h"

class Function
{
    public:
        Function();
        Function(void(*fpointer_)()){fpointer=fpointer_;};
        std::map<std::string, Type*> parameters;
        Type *ret;

        void(*fpointer)() = nullptr;
        int beginline;
        int endline;

        void run();
};

#endif // FUNCTION_H
