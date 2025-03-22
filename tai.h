#ifndef TAI_H
#define TAI_H

#include "uint64.h"

struct tai {
  uint64 x;
} ;

extern void tai_now(struct tai *);

#define tai_approx(t) ((double) ((t)->x))

extern void tai_add(struct tai *, struct tai *, struct tai *);
extern void tai_sub(struct tai *, struct tai *, struct tai *);
#define tai_less(t,u) ((t)->x < (u)->x)

#define TAI_PACK 8
extern void tai_pack(char *, struct tai *);
extern void tai_unpack(char * , struct tai *);

#endif
