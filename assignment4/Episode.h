#ifndef EPISODE_H
#define EPISODE_H

#include <string>
#include <iostream>

class Episode
{
    std::string podcastTitle;
    std::string host;
    std::string episodeTitle;
    std::string category;
    std::string audio;
    std::string videoFile;

public:
    Episode(const std::string &podcastTitle, const std::string &host,
            const std::string &episodeTitle, const std::string &category,
            const std::string &audio, const std::string &videoFile);

    const std::string &getPodcastTitle() const;
    const std::string &getHost() const;
    const std::string &getEpisodeTitle() const;
    const std::string &getCategory() const;
    const std::string &getAudio() const;
    const std::string &getVideoFile() const;

    void print(std::ostream &os) const;

    friend std::ostream &operator<<(std::ostream &os, const Episode &episode);
};

#endif // EPISODE_H
