#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int przew_towar = 0;
    int liczba_zaglowek = 0;
    while (przew_towar < towar) {
    Stocznia stocznia{};
    Statek*  s1 = stocznia();
    przew_towar += s1->transportuj();

    bool zag = dynamic_cast< Zaglowiec* > (s1);

    if (zag)
        liczba_zaglowek++;

    delete s1;
    }
    
    return liczba_zaglowek;
}