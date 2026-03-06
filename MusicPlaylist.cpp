#include "MusicPlaylist.h"

#include <iostream>
#include <fstream>
#include <iomanip>

std::string MusicPlaylistManager::data_path;
std::vector<MusicPlaylist> MusicPlaylistManager::items;

void MusicPlaylistManager::Setup( std::string data_path )
{
}

void MusicPlaylistManager::Teardown()
{
}

/**
   Assigns an `id` to the new item passed in and then adds it to the `items` vector.
   @return                 Returns the id of the new item once finished.
   @param  new_item        A new record to add.
*/
int MusicPlaylistManager::AddItem( MusicPlaylist new_item )
{
    return 0;
}

/**
   Tries to find the item from the `items` vector with the matching `id`.
   @return T       The item with a matching `id`.
   @param  id      The `id` of the item to retrieve.
   @throws Exception::ItemNotFoundException if no record in `items` has a matching `id`.
*/

MusicPlaylist MusicPlaylistManager::GetItem( int id )
{
    size_t index = GetIndexWithId( id );
    return items[ index ];
}

/**
   Overwrites the item in the vector at `id` with the `updated_item` given.
   @return void
   @param  id                  The id of the item to overwrite.
   @param  updated_item        The `updated_item` to now store in the vector.
   @throws Exception::ItemNotFoundException if no record in `items` has a matching `id`.
*/
void MusicPlaylistManager::UpdateItem( int id, MusicPlaylist updated_item )
{
}

/**
   Removes an item from the vector.
   @return void
   @param  id      The id of the record to remove.
   @throws Exception::ItemNotFoundException if no record in `items` has a matching `id`.
*/

void MusicPlaylistManager::RemoveItem( int id )
{
}

/**
   Searches the vector for a record with a matching `id` and returns the index of that item.
   Throws an exception if the `id` does not exist in the vector.
   @return size_t      The index of the record in `items` whose `id` matches.
   @param  id          The `id` of the record we're looking for.
   @throws Exception::ItemNotFoundException if no record in `items` has a matching `id`.
*/

size_t MusicPlaylistManager::GetIndexWithId( int id )
{
    return 0;
}

/**
   Returns the total amount of items stored
   @return size_t      How many items are stored
*/
size_t MusicPlaylistManager::GetSize()
{
    return items.size();
}

/**
   Searches the vector for a record with a matching `id` and returns the index of that item.
   @return bool        true if a record exists with that id, false otherwise.
   @param  id          The `id` of the record we're looking for.
*/

bool MusicPlaylistManager::IdExists( int id )
{
    return false;
}

/**
   Retrieves all IDs stored.
   @return vector<int>     A vector of IDs.
*/

std::vector<int> MusicPlaylistManager::GetAllIds()
{
    std::vector<int> ids;
    return ids;
}


/**
   Displays all the records in the vector in a table format.
   @return void
*/

void MusicPlaylistManager::DisplayTable()
{
}

void MusicPlaylistManager::AddPlaylist( int owner_account_id,
                                        std::string title )
{
}

