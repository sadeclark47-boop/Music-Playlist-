#include "MusicArtist.h"

// Initialize static variable
//int MusicArtist::artistId = 0; ... maybe implement later
MusicArtist::MusicArtist()
{
    artistName = "None";
    artistId++;
}
MusicArtist::MusicArtist(string name)
{
    artistName = name;
    artistId++;
}
void MusicArtist::AddToPlaylist(Album album)
{
    playlist.AddAlbum(album);
}
void MusicArtist::DeleteFromPlaylist(Album album)
{
    
}
void MusicArtist::EditPlaylist(Album album)
{
    
}
void MusicArtist::SetAlbum()
{

}

string MusicArtist::GetArtistName()
{
    return artistName;
}
int MusicArtist::GetId()
{
    return artistId;
}
string MusicArtist::SetArtistName(string name)
{
    artistName = name;
    return artistName;
}

void MusicArtist::SetId(int newId)
{
    artistId = newId;
}

void MusicArtist::PrintPlaylist()
{
    playlist.PrintAlbums();
}


// - Manager ------------------------------------------------------------------

// Initialize static variable
vector<MusicArtist> MusicArtistManager::allItems;

/**
   @param   newItem   A copy of the new item to add to the list of all items
   @return  int       Returns the index of the new item added
   As the size of `allItems` grows as new items are added, I am using the
   current size as the item ID.
*/
int MusicArtistManager::Add( MusicArtist newItem )
{
    newItem.SetId( allItems.size() );
    allItems.push_back( newItem );
    return newItem.GetId();
}

/**
   This function displays each model's ID and member variables.
*/
void MusicArtistManager::Display()
{
    if ( allItems.size() == 0 )
    {
        cout << endl << "There are no items stored." << endl;
    }

    for ( size_t i = 0; i < allItems.size(); i++ )
    {
        cout << "Id: " << allItems[i].GetId() << "\t"
             << "Artist Name: " << allItems[i].GetArtistName() << endl;
    }
}