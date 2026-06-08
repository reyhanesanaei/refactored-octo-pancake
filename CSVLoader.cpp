#include <iostream>
#include <string>
#include <ifstream>
#include "song.h"
using namespace std;

ifstream file("Data\library.csv");

while (getline(file , line)) {
    stringstream ss(line);
    string token;
    getline(ss, title, ',');        // reads up to the first comma → title
    getline(ss, artist, ',');       // reads up to next comma → artist
    getline(ss, album, ',');        // album
    getline(ss, genre, ',');        // genre
    getline(ss, Year, ',');         // year
    int year = stoi(Year);          // turning the "string year" to "int year"
    grtline(ss , Duration , ',');   // duration in sec
    int duration = stoi(duration);  // turning the "string duration in sec" to "int duration in sec"
    getline(ss , filePath , ',');
    Song song(title, 
              artist, 
              album, 
              genre, 
              year, 
              duration, 
              filePath); // adding the song information we got to the "song"

    library.addSong(song); // for the library which will be build.

}

file.close();