//Session 02
#include <iostream>
#include <string>
using namespace std;

class Note
{
private:
    string title;
    string date;
    bool isDone;

public:
    void setNote(string t, string d, bool status){
        title = t;
        date = d;
        isDone = status;
    }

    void displayNote(){
        cout << "\nTitle: " << title;
        cout << "\nDate: " << date;
        cout << "\nCompleted: " << isDone;
    }
};

main(){
	string title,dat;
	bool isDone;
	cout<<"Enter your title:";
	cin>>title;
	cout<<"\nEnter date:";
	cin>>dat;
	cout<<"\nFalse Press f and True press t";
	cout<<"\nIsDone:";
	cin>>isDone;
    Note n1;
    //n1.setNote("Tops", "18-09-2026", false);
    n1.setNote(title, dat,isDone);
    n1.displayNote();
}
