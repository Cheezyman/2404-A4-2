#include "Episode.h"

Episode::Episode(const std::string &podcastTitle, const std::string &host,
                 const std::string &episodeTitle, const std::string &category,
                 const std::string &audio, const std::string &videoFile)
    : podcastTitle(podcastTitle), host(host), episodeTitle(episodeTitle),
      category(category), audio(audio), videoFile(videoFile) {}

const std::string &Episode::getPodcastTitle() const { return podcastTitle; }
const std::string &Episode::getHost() const { return host; }
const std::string &Episode::getEpisodeTitle() const { return episodeTitle; }
const std::string &Episode::getCategory() const { return category; }
const std::string &Episode::getAudio() const { return audio; }
const std::string &Episode::getVideoFile() const { return videoFile; }

void Episode::print(std::ostream &os) const
{
    os << "Episode: " << episodeTitle << ", Podcast: " << podcastTitle
       << ", Host: " << host << ", Category: " << category;
}

std::ostream &operator<<(std::ostream &os, const Episode &episode)
{
    episode.print(os);
    return os;
}
