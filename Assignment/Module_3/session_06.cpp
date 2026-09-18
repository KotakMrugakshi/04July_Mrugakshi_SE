//session 06
#include <iostream>
using namespace std;
// Abstract class
class Platform{
private:
    string accountName;// Private: accessible only inside Platform
protected:
    string platformName;// Protected: accessible in child classes
public:
    Platform(string name, string pName){// Constructor
        accountName = name;
        platformName = pName;
    }
    // Public function to access private data
    void showAccount(){
        cout << "Account Name: " << accountName << endl;
    }
    // Pure virtual function
    virtual void upload() = 0;
};
class YouTube : public Platform{
private:
    int subscribers;
public:
    YouTube(string name, int sub): Platform(name, "YouTube"){
        subscribers = sub;
    }
    // Overriding pure virtual function
    void upload() override{
        cout << platformName << ": Uploading Video..." << endl;
        cout << "Subscribers: " << subscribers << endl;
    }
};
class Instagram : public Platform{
private:
    int followers;
public:
    Instagram(string name, int follow): Platform(name, "Instagram"){
        followers = follow;
    }
    // Overriding pure virtual function
    void upload() override{
        cout << platformName << ": Uploading Reel..." << endl;
        cout << "Followers: " << followers << endl;
    }
};
main(){
    YouTube youtube("Mrugakshi", 5000);
    Instagram instagram("Mrugakshi", 8000);
    cout << "----- YouTube -----" << endl;
    youtube.showAccount();
    youtube.upload();
    cout << "\n----- Instagram -----" << endl;
    instagram.showAccount();
    instagram.upload();
}
