#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject
{
    public:
        GameObject();
        virtual ~GameObject();
    protected:
        virtual void Render();
        virtual void Update();
        virtual void Input();
    private:
};

#endif // GAMEOBJECT_H
