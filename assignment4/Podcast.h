#ifndef PODCAST_H
#define PODCAST_H

#include <string>
#include <iostream>
#include "Episode.h"
#include "Array.h"

class Podcast
{
    Array<Episode *> episodes;
    std::string title;
    std::string host;

public:
    Podcast(const std::string &title, const std::string &host);
    bool equals(const std::string &title) const;
    Episode *get(int index) const;
    int getSize() const;
    void print(std::ostream &os) const;
    void printWithEpisodes(std::ostream &os) const;
    void add(Episode *episode);

    friend std::ostream &operator<<(std::ostream &os, const Podcast &podcast);
};

#endif // PODCAST_H
