#ifndef CASE_H
#define CASE_H

#include <QApplication>
#include <QPushButton>
#include <iostream>

class Case : public QPushButton
{
    Q_OBJECT

    public:
        Case(const QString& str, QWidget* parent, int x, int y, QString color);
        bool clic();
        //int toucher(int dx, int dy);
        int getX();
        int getY();
        void toString();

    private:
        bool hit_;
        int x_;
        int y_;
};

#endif // CASE_H
