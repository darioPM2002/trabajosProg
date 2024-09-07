#include "Offer.h"
#include "Offer.h"
#pragma once
class Super
{
private:
    Offer listOffers[20];
    int countOffers;
    int maxOffers;
public:

    Super();
    void addOffer (Offer);
    void printOffers();
};


