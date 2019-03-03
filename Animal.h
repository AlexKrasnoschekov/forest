#ifndef ANIMAL_H
#define ANIMAL_H

#include "Creature.h"

// Animals can walk and talk.
// They have brains, but they have no idea how to use it.
// You may teach them.

// Notice that an animal also has no idea how to get a face.
// More than that, as an animal, it does not care about faces at all.

class Forest;
class Animal : public Creature
{
    public:
        Animal();
        Animal(double m, double b);
        Animal(double m, double b, int _x, int _y);
        ~Animal();

        virtual void set_brain(double b) final {brain = b;}
        virtual double get_brain() final {return brain;}

        virtual void walk(Forest* f);
        virtual void talk() {}
    private:
        double brain;
};

#endif // ANIMAL_H
