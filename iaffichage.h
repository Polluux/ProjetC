#ifndef IAFFICHAGE_H
#define IAFFICHAGE_H

#include <QApplication>
#include <QWidget>
#include <iostream>
#include <memory>
#include <iostream>

class Core;

class IAffichage : public QWidget
{
    Q_OBJECT

    public:
        IAffichage();
        virtual void afficher()=0;
        virtual void changeToMenu()=0;
        virtual void changeToInitialisationJ1()=0;
        virtual void changeToInitialisationJ2()=0;
        virtual void changeToJeu()=0;

        std::shared_ptr<Core> getCore();

        virtual ~IAffichage();

    protected:
        std::shared_ptr<Core> core_;
};

#endif // IAFFICHAGE_H
