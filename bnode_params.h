#ifndef _BNODE_PARAMS_H_

#include "global_params.h"

/*
 * Starting index of a BNode's element count
 */
static const size_t ELEMENT_COUNT_INDEX = 0;

/*
 * Starting index of left sibling pointer for a LeafBNode
 */
static const size_t LEFT_SIBLING_PTR_INDEX = ELEMENT_COUNT_INDEX + SIZE_T_SIZE_IN_BYTES;

/*
 * Starting index of right sibling pointer for a LeafBNode
 */
static const size_t RIGHT_SIBLING_PTR_INDEX = LEFT_SIBLING_PTR_INDEX + POINTER_SIZE_IN_BYTES;

/*
 * Starting index of the first element of a LeafBNode
 */
static const size_t LEAF_FIRST_ELEMENT_INDEX = RIGHT_SIBLING_PTR_INDEX + POINTER_SIZE_IN_BYTES;

/*
 * Starting index of the first element of a TreeBNode
 */
static const size_t TREE_FIRST_ELEMENT_INDEX = ELEMENT_COUNT_INDEX + SIZE_T_SIZE_IN_BYTES;

#endif