#ifndef _GQF_WRAPPER_2_H_
#define _GQF_WRAPPER_2_H_

#include <inttypes.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

  void* qf_wrapper_new();

	void* qf_wrapper_destroy(void* qf);

	bool qf_wrapper_malloc(void* qf, uint64_t nslots, uint64_t key_bits);

	int qf_wrapper_insert(void* qf, uint64_t key, uint64_t value, uint64_t count, uint8_t flags);

	uint64_t qf_wrapper_count_key_value(void* qf, uint64_t key, uint64_t value, uint8_t flags);


#ifdef __cplusplus
}
#endif

#endif /* _GQF_WRAPPER_2_H_ */
