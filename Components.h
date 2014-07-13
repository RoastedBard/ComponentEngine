//#pragma once
//
//#include <iostream>
//#include <memory>
//
//using namespace std;
//
//enum ComponentIds
//{
//    COMPONENT_TRANSFORM = 0,
//    COMPONENT_MOVEMENT,
//    COMPONENT_PHYSICS
//};
//
//class GameObject;
//
//class IComponent
//{
//public:
//    IComponent()
//    {
//        _id = -1;
//    }
//
//    virtual ~IComponent()
//    {
//        cout<<"~Destroying IComponent\n";
//    }
//
//public:
//    virtual void update() = 0;
//
//    unsigned getId() const
//    {
//        return _id;
//    }
//
//    void setOwner(GameObject *owner)
//    {
//        _owner.reset(owner);
//    }
//
//protected:
//    unsigned _id; // Predefined enum value. for example: COMPONENT_TRANSFORM, COMPONENT_PLATFORMER_CONTROLLER
//    shared_ptr<GameObject> _owner; // GameObject that owns this component
//};
//
//class TransformComponent : public IComponent
//{
//public:
//    virtual void update()
//    {
//        cout<<"TransformComponent updating\n";
//    }
//
//    TransformComponent()
//    {
//        _id = COMPONENT_TRANSFORM;
//        x = 0;
//        y = 0;
//    }
//
//    ~TransformComponent()
//    {
//        cout<<"~Destroying TransformComponent\n";
//    }
//
//public:
//    float x, y;
//};
//
//class MovementComponent : public IComponent
//{
//public:
//    virtual void update()
//    {
//        cout<<"MovementComponent updating\n";
//    }
//
//    MovementComponent()
//    {
//        _id = COMPONENT_MOVEMENT;
//        velX = 0;
//        velY = 0;
//    }
//
//    ~MovementComponent()
//    {
//        cout<<"~Destroying MovementComponent\n";
//    }
//
//public:
//    float velX, velY;
//};
//
//class PhysicsComponent : public IComponent
//{
//public:
//    virtual void update()
//    {
//        shared_ptr<IComponent> comp = _owner->getComponent(COMPONENT_TRANSFORM);
//        shared_ptr<TransformComponent> trComp = static_pointer_cast<TransformComponent>(comp);
//
//        trComp->x += 3;
//        trComp->y += 3;
//
//        cout<<"PhysicsComponent updating\n";
//    }
//
//    PhysicsComponent()
//    {
//        _id = COMPONENT_PHYSICS;
//    }
//
//    ~PhysicsComponent()
//    {
//        cout<<"~Destroying PhysicsComponent\n";
//    }
//};