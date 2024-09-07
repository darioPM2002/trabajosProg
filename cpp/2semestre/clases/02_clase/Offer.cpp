#include "Offer.h"


Offer::Offer()
{
    product  = Product();
    discount = 0;
}

Offer::Offer(Product np, int disc)
{
    product  = np;
    discount = disc;
}

Offer::Offer(int disc, Product np)
{
}