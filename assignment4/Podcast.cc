#include "Podcast.h"

Podcast::Podcast(const std::string &title, const std::string &host)
    : title(title), host(host) {}

bool Podcast::equals(const std::string &title) const
{
    return this->title == title;
}

Episode *Podcast::get(int index) const
{
    return episodes[index];
}

int Podcast::getSize() const
{
    return episodes.getSize();
}

void Podcast::print(std::ostream &os) const
{
    os << "Podcast: " << title << ", Host: " << host;
}

void Podcast::printWithEpisodes(std::ostream &os) const
{
    print(os);
    for (int i = 0; i < episodes.getSize(); ++i)
    {
        os << *episodes[i];
    }
}

void Podcast::add(Episode *episode)
{
    episodes += episode;
}

std::ostream &operator<<(std::ostream &os, const Podcast &podcast)
{
    podcast.print(os);
    return os;
}
