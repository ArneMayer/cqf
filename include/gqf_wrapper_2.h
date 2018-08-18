/*
 * ============================================================================
 *
 *        Authors:  Prashant Pandey <ppandey@cs.stonybrook.edu>
 *                  Rob Johnson <robj@vmware.com>
 *
 * ============================================================================
 */

#ifndef _GQF_WRAPPER_2_H_
#define _GQF_WRAPPER_2_H_

#include <inttypes.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

  int qf_wrapper_new();

	void *qf_wrapper_destroy(int qf_id);

	bool qf_wrapper_malloc(int qf_id, uint64_t nslots, uint64_t key_bits, uint64_t
								 value_bits, enum qf_hashmode hash, uint32_t seed);

	int qf_wrapper_insert(int qf_id, uint64_t key, uint64_t value, uint64_t count, uint8_t
								flags);

	uint64_t qf_wrapper_count_key_value(const int qf_id, uint64_t key, uint64_t value,
															uint8_t flags);


#ifdef __cplusplus
}
#endif

#endif /* _GQF_WRAPPER_2_H_ */
