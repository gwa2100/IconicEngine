#ifndef TRIGGEROBJECT_H
#define TRIGGEROBJECT_H

#include <EmptyObject.h>


class TriggerObject : public EmptyObject
{
    public:
        TriggerObject();
        virtual ~TriggerObject();
    protected:
        bool isTriggered;
        virtual void OnTrigger();
    private:
};

#endif // TRIGGEROBJECT_H
