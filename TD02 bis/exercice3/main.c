#include <stdio.h>
#include <assert.h>

int main(void)
{

    assert(bissex(1996) == 1);
    assert(bissex(1997) == 0);
    assert(bissex(2000) == 1);


    return 0;
}


int bissex(int annee)
{
    if((annee % 4 == 0 && annee %100 != 0) || (annee % 400 == 0) )
    {
        return(1);
    }
    else
        return(0);
}
