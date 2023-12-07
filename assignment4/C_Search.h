#ifndef C_SEARCH_H
#define C_SEARCH_H

#include "Search.h"

class C_Search : public Search
{
    std::string category;

public:
    C_Search(const std::string &category);
    bool matches(const Episode *episode) const override;
    void print(std::ostream &os) const override;
};

#endif // C_SEARCH_H
