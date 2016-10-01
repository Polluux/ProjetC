#ifndef CASE_H
#define CASE_H

#include <QPushButton>
#include <iostream>

class Case : public QPushButton
{
    public:
        Case(const QString& str, QWidget* parent, int x, int y);
        bool getTouche();
        void toucher();
        void toString();

    private:
        bool touche;
        int abs;
        int ord;
};

#endif // CASE_H
