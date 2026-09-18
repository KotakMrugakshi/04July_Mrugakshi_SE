//session 07
#include <iostream>
#include <fstream>
using namespace std;

main(){
    string creatorName;
    int followers, views, likes;
    // ---------------- WRITE DATA ----------------
    cout << "Enter Creator Name: ";
    cin >> creatorName;
    cout << "Enter Followers: ";
    cin >> followers;
    cout << "Enter Views: ";
    cin >> views;
    cout << "Enter Likes: ";
    cin >> likes;
    // Create and open file for writing
    ofstream outfile("session_07.txt");
    if (!outfile){
        cout << "Error: File could not be opened!" << endl;
}
    // Write data into file
    outfile << "Creator Name: " << creatorName << endl;
    outfile << "Followers: " << followers << endl;
    outfile << "Views: " << views << endl;
    outfile << "Likes: " << likes << endl;
    outfile.close();
    cout << "\nData saved successfully!" << endl;
    // ---------------- READ DATA ----------------
    ifstream infile("session_07.txt");
    if (!infile){
        cout << "Error: File could not be opened!" << endl;
    }
    string line;
    cout << "\n----- Creator Analytics -----" << endl;
    // Read file line by line
    while (getline(infile, line)){
        cout << line << endl;
    }
    infile.close();
}
