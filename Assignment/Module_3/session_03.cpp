//session 03
#include <iostream>
using namespace std;

class Playlist
{
private:
    string playlistName;
    string singer;
    int songs;

public:

    // 1. Default Constructor
    Playlist(){
        playlistName = "My Favourites";
        singer = "Unknown";
        songs = 0;
        
    }

    // 2. Parameterized ConstructorN
    Playlist(string name, string s, int n){
        playlistName = name;
        singer = s;
        songs = n;
    }

    // 3. Copy Constructor
    Playlist(Playlist &p){
    	cout<<"\n"
        playlistName = p.playlistName;
        singer = p.singer;
        songs = p.songs;
    }

    // Display Function
    void display(){
        cout << "\nPlaylist Name: " << playlistName;
        cout << "\nSinger: " << singer;
        cout << "\nNumber of Songs: "<<songs;
    }
};

main(){
    // Default Constructor
    Playlist p1;
	cout << "\n--- Default Constructor Object ---\n";
    p1.display();
    // Parameterized Constructor
    Playlist p2("Romantic Songs", "Arijit Singh", 15);
    cout << "\n--- Parameterized Constructor Object ---\n";
    p2.display();
    // Copy Constructor
    Playlist p3(p2);
    cout << "\n--- Copy Constructor Object ---\n";
    p3.display();
}
