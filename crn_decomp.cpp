#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#ifdef _WIN32
#define malloc_usable_size _msize
#endif
#ifdef __APPLE__
#include <malloc/malloc.h>
#define malloc_usable_size malloc_size
#endif
#include "crn_decomp.h"
