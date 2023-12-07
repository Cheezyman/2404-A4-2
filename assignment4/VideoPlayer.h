#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include "AudioPlayer.h"

class VideoPlayer : public AudioPlayer
{
public:
    void play(const Episode &episode, std::ostream &os) override;
};

#endif // VIDEOPLAYER_H
