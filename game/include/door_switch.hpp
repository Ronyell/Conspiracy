#ifndef DOOR_SWITCH_HPP
#define DOOR_SWITCH_HPP

#include "engine.hpp"
#include "animation.hpp"
#include "game_object.hpp"

using namespace engine;

class DoorSwitch: public GameObject{
public:
    DoorSwitch(std::string objectName, double positionX, double positionY, int width, int height);
    ~DoorSwitch();
    void update(double timeElapsed);
    void draw();
    void init();
    Animation * getAnimation();
    void animate();
    bool isPressed();
protected:
    bool pressed;
    Animation* animator;
};

#endif