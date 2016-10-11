#ifndef CASE_H
#define CASE_H

#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <contenu.h>
#include <memory>

using namespace std;

class Case : public QPushButton
{
    Q_OBJECT

    public:
        Case(QWidget* parent, int x, int y);
        bool clic();
        //int toucher(int dx, int dy);
        int getX();
        int getY();
        void toString();
        shared_ptr<Contenu> getContent();
        void setContent(Contenu *c);

        virtual ~Case();

    private:
        bool hit_;
        int x_;
        int y_;
        shared_ptr<Contenu> content_;
};

#endif // CASE_H
