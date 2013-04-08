#ifndef STATICGUIOBJECT_H
#define STATICGUIOBJECT_H

#include <StaticObject.h>


class StaticGUIObject : public StaticObject
{
    public:
        StaticGUIObject();
        virtual ~StaticGUIObject();
    protected:
        bool isClicked;
        virtual void OnClick();
    private:
};

#endif // STATICGUIOBJECT_H
