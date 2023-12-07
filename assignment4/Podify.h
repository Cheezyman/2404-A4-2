#ifndef PODIFY_H
#define PODIFY_H

#include "Podcast.h"
#include "Search.h"
#include "Array.h"

class Podify
{
    Array<Podcast *> podcasts;

public:
    void addPodcast(Podcast *podcast);
    void addEpisode(Episode *episode, const std::string &podcastTitle);
    const Array<Podcast *> &getPodcasts() const;
    Podcast *getPodcast(int index) const;
    Podcast *getPodcast(const std::string &title) const;
    void getEpisodes(const Search &search, Array<Episode *> &episodes) const;
};

#endif // PODIFY_H
