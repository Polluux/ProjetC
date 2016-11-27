#ifndef CASE_H
#define CASE_H

#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <contenu.h>
#include <memory>

#include "contenu.h"
#include "mer.h"

class Case : public QPushButton
{
    Q_OBJECT

    public:
        Case(QWidget* parent, int x, int y);
        bool clic();
        int getX();
        int getY();
        void toString();
        std::shared_ptr<Contenu> getContent();
        void setContent(Contenu *c);
        void setContent(std::shared_ptr<Contenu> c);
        bool isEmpty();
        void resetCase();

        virtual ~Case();

    private:
        bool hit_;
        int x_;
        int y_;
        std::shared_ptr<Contenu> content_;
};

#endif // CASE_H
