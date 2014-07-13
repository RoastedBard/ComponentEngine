#ifndef _MOVEMENTCOMPONENT_H_
#define _MOVEMENTCOMPONENT_H_

#include "icomponent.h"
class MovementComponent :
    public IComponent
{
public:
    MovementComponent(void);
    ~MovementComponent(void);

public:
    virtual void update();

public:
    float velX, velY;
};

#endif