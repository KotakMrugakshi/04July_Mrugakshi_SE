//Session 02
#include <iostream>
using namespace std;

class Note{
private:
    string title,date;
    string isDone;

public:
    void setNote(string t, string d, string status){
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
	string isDone;
	char isStatus;
	cout<<"Enter your title:";
	cin>>title;
	cout<<"\nEnter date:";
	cin>>dat;
	cout<<"\nFalse Press f and True press t";
	cout<<"\nIsDone:";
	cin>>isStatus;
    Note n1;
    //n1.setNote("Tops", "18-09-2026", false);
    if(isStatus=='t'||isStatus=='T'){
    	isDone ="true";
	}else{
		isDone="false";
	}
    n1.setNote(title, dat,isDone);
    n1.displayNote();
}
