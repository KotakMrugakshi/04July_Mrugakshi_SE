//session 05
#include <iostream>
using namespace std;

class ContentCreator{
public:
    // Function Overloading
    void uploadContent(string video){
        cout << "Uploading: " << video << endl;
    }
  
  void uploadContent(string video, int size){
        cout << "Uploading: " << video << endl;
        cout << "Video Size: " << size << " MB" << endl;
    }
    // Function for Runtime Polymorphism
    virtual void platformUpload(){
        cout << "Uploading content to platform" << endl;
    }
};
class YouTube : public ContentCreator{
public:
    // Runtime Polymorphism
    // Function Overriding
    void platformUpload() override{
        cout << "YouTube: Uploading long video..." << endl;
    }
};
class Instagram : public ContentCreator{
public:
    // Runtime Polymorphism
    // Function Overriding
    void platformUpload() override{
        cout << "Instagram: Uploading Reel..." << endl;
    }
};
main(){
    // 1. COMPILE-TIME POLYMORPHISM
    cout << "===== COMPILE-TIME POLYMORPHISM =====" << endl;
    ContentCreator c;
    c.uploadContent("Travel Video");
    cout << endl;
    c.uploadContent("Travel Video", 100);
    // 2. Runtime Polymorphism
    // Function Overriding
    cout << "\n===== RUNTIME POLYMORPHISM =====" << endl;
    ContentCreator *creator;
    YouTube youtube;
    Instagram instagram;
    // YouTube
    creator = &youtube;
    creator->platformUpload();
    // Instagram
    creator = &instagram;
    creator->platformUpload();
}
