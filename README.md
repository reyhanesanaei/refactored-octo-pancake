# music player

tips:
1)library.csv  →  CsvLoader reads it  →  creates Song objects  →  stored in MusicLibrary
                                                                        ↓
                                              when user hits play → filePath handed to miniaudio
                                                                        ↓
                                                                   .mp3 file plays
