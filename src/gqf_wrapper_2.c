#include "gqf.h"
#include "gqf_wrapper_2.h"

std::vector<QF> qfs;

int qf_wrapper_new() {
  qfs.push_back(quotient_filter = quotient_filter());
  return qfs.size() - 1;
}

void *qf_wrapper_destroy(int qf_id) {
  qf_destroy(&qfs[qf_id]);
}

bool qf_wrapper_malloc(int qf_id, uint64_t nslots, uint64_t key_bits) {
  qf_malloc(&qfs[qf_id], nslots, key_bits, 0, LOCKS_FORBIDDEN, DEFAULT, 0);

}

int qf_wrapper_insert(int qf_id, uint64_t key, uint64_t value, uint64_t count, uint8_t flags) {
  qf_insert(&qfs[qf_id], key, value, count, flags);
}

uint64_t qf_wrapper_count_key_value(const int qf_id, uint64_t key, uint64_t value, uint8_t flags) {
  qf_count_key_value(&qfs[qf_id], key, value, flags);
}
