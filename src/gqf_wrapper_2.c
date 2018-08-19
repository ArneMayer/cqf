#include "gqf_wrapper_2.h"
#include "gqf.h"


#include <stdlib.h>


void* qf_wrapper_new() {
  void* qf = (void*)malloc(sizeof(QF));
  return qf;
}

void *qf_wrapper_destroy(void* qf) {
  qf_destroy((QF*) qf);
  free(qf);
}

bool qf_wrapper_malloc(void* qf, uint64_t nslots, uint64_t key_bits) {
  qf_malloc((QF*) qf, nslots, key_bits, 0, QF_HASH_DEFAULT, 0);

}

int qf_wrapper_insert(void* qf, uint64_t key, uint64_t value, uint64_t count, uint8_t flags) {
  qf_insert((QF*) qf, key, value, count, flags);
}

uint64_t qf_wrapper_count_key_value(void* qf, uint64_t key, uint64_t value, uint8_t flags) {
  qf_count_key_value((QF*) qf, key, value, flags);
}
