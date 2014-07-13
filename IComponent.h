#ifndef _ICOMPONENT_H_
#define _ICOMPONENT_H_

#include <memory>

using namespace std;

class GameObject;

class IComponent
{
public:
    IComponent(void);
    virtual ~IComponent(void);

public:
    virtual void update() = 0;
    unsigned getId() const;
    void setOwner(GameObject *owner);

protected:
    unsigned _id; // Predefined enum value. for example: COMPONENT_TRANSFORM, COMPONENT_PLATFORMER_CONTROLLER
    unique_ptr<GameObject> _owner; // GameObject that owns this component
};

#endif