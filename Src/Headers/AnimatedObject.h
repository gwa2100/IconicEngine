#ifndef ANIMATEDOBJECT_H
#define ANIMATEDOBJECT_H

#include <DynamicObject.h>


class AnimatedObject : public DynamicObject
{
    public:
        AnimatedObject();
        virtual ~AnimatedObject();
    protected:
        // Later to be replaced by a tileset variable
        int AnimationTiles;
        virtual void Animate();
        virtual void NextTile();
        virtual void LastTile();
    private:
};

#endif // ANIMATEDOBJECT_H
