#include "bplustree.h"

struct RowSim {
    std::vector<int> data;
};

struct ResultSetSim {
    std::vector<RowSim> rows;
};

int main() {
    ResultSetSim resultSet;
    for (int i = 0; i < 5; ++i) {
        RowSim row;
        for (int j = 0; j < 10; ++j) {
            row.data.push_back(j);
        }

        resultSet.rows.push_back(row);
    }

    BPlusTree<int, ResultSetSim> intTree;
    BPlusTree<char*, ResultSetSim> stringTree;

    return 0;
}