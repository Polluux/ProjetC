#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <iostream>

class Affichage : public QWidget
{
    Q_OBJECT

    public:
        Affichage();
        void addContent(QWidget* c,int x, int y);
        void removeAll();
        void afficher();

    private:
        QGridLayout *layout_;
};

#endif // AFFICHAGE_H
