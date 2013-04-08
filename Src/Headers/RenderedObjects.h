#ifndef RENDEREDOBJECTS_H
#define RENDEREDOBJECTS_H

#include <GameObject.h>


class RenderedObjects : public GameObject
{
    public:
        RenderedObjects();
        virtual ~RenderedObjects();
    protected:
        int velocity;
        virtual void Move();
    private:
};

#endif // RENDEREDOBJECTS_H
