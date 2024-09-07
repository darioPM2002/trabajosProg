#include "Super.h"

Super::Super()
{
    maxOffers = 20;
    countOffers = 0;
}

void Super::addOffer(Offer nOf )
{       if (countOffers < maxOffers)
    {
        listOffers[countOffers] = nOf;
        countOffers++;    
    }

};

void Super::printOffers()
{
    for (int i = 0; i < countOffers; i++)
    {
        std::cout <<  listOffers[i].product.getName()<< std::endl;
    }
    
};