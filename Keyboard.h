#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <conio.h>

class Keyboard
{
    public:
        Keyboard();
        ~Keyboard();
        int getKeyboard();
    protected:

    private:
        int UNKNOWN = -1;
        const static int UP = 0;
        const static int DOWN = 1;
        const static int LEFT = 2;
        const static int RIGHT = 3;
        const static int ENTER = 4;
        friend class Player;
};

#endif // KEYBOARD_H
