#ifndef _MusicPlaylist_Header
#define _MusicPlaylist_Header

#include <iostream>
#include <vector>
#include <string>

struct MusicPlaylist
{
    //! Unique ID of this MusicPlaylist item
    int id;
    //! ID of the associated Account
    int owner_account_id;
    //! Name of the playlist
    std::string title;
};

class MusicPlaylistManager
{
public:
    static void Setup(std::string data_path);
    static void Teardown();
    static int AddItem(MusicPlaylist new_item);
    static MusicPlaylist GetItem(int id);
    static void UpdateItem(int id, MusicPlaylist updated_item);
    static void RemoveItem(int id);
    static size_t GetIndexWithId(int id);
    static size_t GetSize();
    static bool IdExists(int id);
    static std::vector<int> GetAllIds();
    static void DisplayTable();

    static void AddPlaylist( int owner_account_id, std::string title );
private:
    static std::string data_path;
    static std::vector<MusicPlaylist> items;
};

#endif

