#ifndef PLAYEROBJECT_H
#define PLAYEROBJECT_H

#include <AnimatedObject.h>


class PlayerObject : public AnimatedObject
{
    public:
        PlayerObject();
        virtual ~PlayerObject();
    protected:
        // Place holder for Stats,Name,HP,Etc
        virtual void SetStats();
        virtual void InputHandling();
    private:
};

#endif // PLAYEROBJECT_H
