#ifndef OBJECT_H
#define OBJECT_H
#include <vector>

class Object {
    public:
        char* ClassName;
        std::vector<Object*> children;
};

#endif