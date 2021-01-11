#ifndef _BNODE_H_

#include "params.h"

class BNode {
public:
    BNode();

    ~BNode();

    void getNthSearchKey(size_t index, unsigned char* buffer);

    void getNthChildPointer(size_t index, unsigned char* buffer);

    void getParentPointer(unsigned char* buffer);

    void addSearchKey(unsigned char* buffer);

    void removeSearchKey(size_t index);

    size_t findSearchKeyIndex(unsigned char* buffer);

    size_t getSearchKeyCount();

private:
    unsigned char data[PAGE_SIZE_IN_BYTES];
};

#endif