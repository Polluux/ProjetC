#ifndef IAFFICHAGE_H
#define IAFFICHAGE_H

#include <QApplication>
#include <QWidget>
#include <iostream>

#include <memory>
#include <iostream>

using namespace std;

class Core;

class IAffichage : public QWidget
{
    Q_OBJECT

    public:
        IAffichage();
        virtual void afficher()=0;
        virtual void changeToMenu()=0;
        virtual void changeToInitialisation()=0;
        virtual void changeToJeu()=0;

        virtual ~IAffichage();

    protected:
        shared_ptr<Core> core_;
};

#endif // IAFFICHAGE_H
