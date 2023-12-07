#ifndef HORC_SEARCH_H
#define HORC_SEARCH_H

#include "H_Search.h"
#include "C_Search.h"

class HorC_Search : public H_Search, public C_Search
{
public:
    HorC_Search(const std::string &host, const std::string &category);
    bool matches(const Episode *episode) const override;
    void print(std::ostream &os) const override;
};

#endif // HORC_SEARCH_H
