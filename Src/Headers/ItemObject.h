#ifndef ITEMOBJECT_H
#define ITEMOBJECT_H

#include <NonAnimatedObject.h>


class ItemObject : public NonAnimatedObject
{
    public:
        ItemObject();
        virtual ~ItemObject();
    protected:
        // This is where the attributes for a basic item will go,
        // The "int itemAttributes" is a place holder.
        int itemAttributes;
        virtual void SetAttributes();
        virtual void Effect();
    private:
};

#endif // ITEMOBJECT_H
