#ifndef E_MOD_MAIN_H
#define E_MOD_MAIN_H

#include "utility.h"
#include <e.h>

typedef struct _Clip_Data {
    void *inst;
    char *name;
    char *content;
} Clip_Data;

EAPI extern E_Module_Api e_modapi;

EAPI void *e_modapi_init     (E_Module *m);
EAPI int   e_modapi_shutdown (E_Module *m);
EAPI int   e_modapi_save     (E_Module *m);

#endif
