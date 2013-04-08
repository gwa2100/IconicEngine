#ifndef AIOBJECTS_H
#define AIOBJECTS_H

#include <AnimatedObject.h>


class AIObjects : public AnimatedObject
{
    public:
        AIObjects();
        virtual ~AIObjects();
    protected:
        // Intended for computers aiming mechanism.
        int targetPos;
        // Place holder for Stats, etc.
        virtual void SetStats();
        virtual void AIHandling();
    private:
};

#endif // AIOBJECTS_H
