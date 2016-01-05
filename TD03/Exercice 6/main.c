#include "mesFcts.h"
#include <assert.h>

int main()
{
    int tab[4] = {1,2,3,4}, tab2[4] = {-1,-2,-3,-4}, tab3[4] = {1,-2,3,-4};

    int max1, max2;

    research(tab);




    researchVariant(tab, &max1, &max2);

    assert(max1 == 4);
    assert(max2 == 3);


    researchVariant(tab2, &max1, &max2);

    assert(max1 == -1);
    assert(max2 == -2);

    researchVariant(tab3, &max1, &max2);

    assert(max1 == 3);
    assert(max2 == 1);

    return 0;
}
