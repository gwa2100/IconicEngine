#ifndef ANIMATEDGUIOBJECT_H
#define ANIMATEDGUIOBJECT_H

#include <AnimatedObject.h>


class AnimatedGUIObject : public AnimatedObject
{
    public:
        AnimatedGUIObject();
        virtual ~AnimatedGUIObject();
    protected:
        bool isClicked;
        int action;
        virtual void OnClick();
    private:
};

#endif // ANIMATEDGUIOBJECT_H
