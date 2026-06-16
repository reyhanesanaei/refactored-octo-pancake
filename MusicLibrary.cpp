#include <iostream>
#include <string>
#include <vector>
#include "MusicLibrary.h"
#include "song.h"
using namespace std;

vector<Song*> songs;

MusicLibrary::MusicLibrary() {}

void MusicLibrary::addSong(const Song& song) {
    songs.push_back(new Song(song));
}

vector<Song*> MusicLibrary::filterByArtist(const string& artist) const {
    vector<Song*> result;
    for (Song* song : songs) {
        if (song->getArtist() == artist)
            result.push_back(song);
    }
    return result;
};

vector<Song*> MusicLibrary::filterByAlbum(const string& album) const {
    vector<Song*> result;
    for (Song* song : songs) {
        if (song->getAlbum() == album)
            result.push_back(song);
    }
    return result;
};

Song* MusicLibrary::getSong(int index) {
    if (index < 0 || index >= (int)songs.size())
        return nullptr;
    return songs[index];
}

vector<Song*> MusicLibrary::getAllSongs() const {
    return songs;
}




MusicLibrary::~MusicLibrary() 
{
    for (auto* song : songs) delete song;
}

