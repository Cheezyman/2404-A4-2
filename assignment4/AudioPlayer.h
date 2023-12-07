#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include "PodcastPlayer.h"

class AudioPlayer : public PodcastPlayer
{
public:
    void play(const Episode &episode, std::ostream &os) override;
};

#endif // AUDIOPLAYER_H
