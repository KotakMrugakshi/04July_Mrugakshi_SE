//Session 04
#include <iostream>
using namespace std;
class ContentCreator{
protected:
    string name;

public:
    ContentCreator(string n){
        name = n;
    }
    void creatorInfo(){
        cout << "Creator Name: " << name << endl;
    }
};
// Single Inheritance
class YouTuber : public ContentCreator{
protected:
    int subscribers;
public:
    YouTuber(string n, int s) : ContentCreator(n){
        subscribers = s;
    }
    void youtubeInfo(){
        cout << "Platform: YouTube" << endl;
        cout << "Subscribers: " << subscribers << endl;
    }
};
// Child Class of YouTuber
// Multilevel Inheritance
class Vlogger : public YouTuber{
private:
    string category;

public:

    Vlogger(string n, int s, string c) : YouTuber(n, s){
        category = c;
    }
    void vloggerInfo(){
        cout << "Category: " << category << endl;
    }
};
// Hierarchical Inheritance
class Podcaster : public ContentCreator{
private:
    string podcastName;
public:
    Podcaster(string n, string p) : ContentCreator(n){
        podcastName = p;
    }
    void podcastInfo(){
        cout << "Platform: Podcast" << endl;
        cout << "Podcast Name: " << podcastName << endl;
    }
};
main(){
    cout << "===== SINGLE INHERITANCE =====" << endl;
    YouTuber y1("Rahul", 50000);
    y1.creatorInfo();
    y1.youtubeInfo();
    cout << "\n===== MULTILEVEL INHERITANCE =====" << endl;
    Vlogger v1("Priya", 100000, "Travel");
    v1.creatorInfo();
    v1.youtubeInfo();
    v1.vloggerInfo();
    cout << "\n===== HIERARCHICAL INHERITANCE =====" << endl;
    Podcaster p1("Amit", "Tech Talks");
    p1.creatorInfo();
    p1.podcastInfo();
}
