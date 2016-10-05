#ifndef ESC3NARD_H
#define ESC3NARD_H

#include "bateau.h"
#include "carte.h"

class Esc3nard : public Bateau
{
    public:
        Esc3nard(int x, int y, bool horizontal, Carte *parent);
};

#endif // ESC3NARD_H
