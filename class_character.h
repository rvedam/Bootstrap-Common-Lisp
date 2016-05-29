#include "header.h"
#include "integers.h"

extern struct header_struct class_character_header;

#define define_character(name, value)		       \
                                                       \
void *                                                 \
character_ ## name ## _rack[] =                        \
  {                                                    \
    (void *) &symbol_nil_header,                       \
    (void *) &integer_1_header,                        \
    (void *) value,                                    \
  };                                                   \
                                                       \
struct header_struct character_ ## name ## _header =   \
  {                                                    \
    &class_character_header,                           \
    character_ ## name ## _rack,		       \
  }

#define reference_character(name)                      \
  (void *) &character_ ## name ## _header