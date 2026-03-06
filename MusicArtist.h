#ifndef _MusicArtist
#include <iostream>
#include <string>
#include "Album.h"
#include "Playlist.h"
using namespace std;


class MusicArtist
{
public:
    MusicArtist();
    MusicArtist(string name);
    void AddToPlaylist(Album album);
    void DeleteFromPlaylist(Album album);
    void EditPlaylist(Album album);
    void PrintPlaylist();
    string GetArtistName();
    int GetId();
    void SetId( int newId );
   
   
    void SetAlbum();
    string SetArtistName(string name);
   

private:
    string artistName;
    int artistId;
    Playlist playlist; //thinking there would be album class with album name, tracks...
 
};
// - Manager ------------------------------------------------------------------

class MusicArtistManager
{
public:
    static int Add( MusicArtist newItem );
    static void Display();

private:
    static vector<MusicArtist> allItems;
};

void Test_MusicArtist();
#endif 