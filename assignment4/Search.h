#ifndef SEARCH_H
#define SEARCH_H

#include "Episode.h"
#include <iostream>

class Search
{
public:
    virtual bool matches(const Episode *episode) const = 0;
    virtual void print(std::ostream &os) const = 0;
    friend std::ostream &operator<<(std::ostream &os, const Search &search);
};

#endif // SEARCH_H
