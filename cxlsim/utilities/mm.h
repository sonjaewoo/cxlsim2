#ifndef __MM_H
#define __MM_H

// **************************************************************************************
// User-defined memory manager, which maintains a pool of transactions
// **************************************************************************************
#include "tlm.h"

class mm: public tlm::tlm_mm_interface
{
    typedef tlm::tlm_generic_payload gp_t;

public:
    mm(): free_list(0), empties(0) {}

    gp_t* allocate();
    void  free(gp_t* trans);

private:
    struct access
    {
        gp_t* trans;
        access* next;
        access* prev;
    };

    access* free_list;
    access* empties;
};

#endif
