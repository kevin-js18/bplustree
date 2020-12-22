#include <iostream>
#include <string>

template <class SearchKeyType, class DataType>
struct DataEntry {
    SearchKeyType searchKey;
    DataType* rid;

    DataEntry(SearchKeyType searchKeyIn, DataType* ridIn) : searchKey(searchKeyIn), rid(ridIn) {};
};

class BPlusTree {
public:

private:
};