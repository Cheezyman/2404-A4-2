#ifndef H_SEARCH_H
#define H_SEARCH_H

#include "Search.h"

class H_Search : public Search
{
    std::string host;

public:
    H_Search(const std::string &host);
    bool matches(const Episode *episode) const override;
    void print(std::ostream &os) const override;
};

#endif // H_SEARCH_H
