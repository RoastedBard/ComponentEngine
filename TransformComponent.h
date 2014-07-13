#ifndef _TRANSFORMCOMPONENT_H_
#define _TRANSFORMCOMPONENT_H_

#include "icomponent.h"
class TransformComponent :
    public IComponent
{
public:
    TransformComponent(void);
    ~TransformComponent(void);

public:
    virtual void update();

public:
    float x, y;
};

#endif