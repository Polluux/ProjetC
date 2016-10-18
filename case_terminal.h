#ifndef CASE_H
#define CASE_H

#include <iostream>
#include <string>

class Case
{
    public:
        Case(int x, int y, std::string s);
        int toucher(int dx, int dy);
        int getAbs();
        int getOrd();
        void setAbs(int x);
        void setOrd(int y);
        std::string getMotif();
        void setMotif(std::string m);
        bool estEgale(Case c);
        void toString();

    private:
        bool m_touche;
        int m_abs;
        int m_ord;
        std::string m_motif;
};

#endif // CASE_H