#ifndef _PHYSICSCOMPONENT_H_
#define _PHYSICSCOMPONENT_H_

#include "icomponent.h"

class PhysicsComponent :
    public IComponent
{
public:
    PhysicsComponent(void);
    ~PhysicsComponent(void);

public:
    virtual void update();
};

#endif