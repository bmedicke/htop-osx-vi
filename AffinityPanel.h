/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_AffinityPanel
#define HEADER_AffinityPanel


#include "Panel.h"
#include "CheckItem.h"

#include "debug.h"
#include <assert.h>

Panel* AffinityPanel_new(int processorCount, unsigned long mask);

unsigned long AffinityPanel_getAffinity(Panel* this);

#endif
