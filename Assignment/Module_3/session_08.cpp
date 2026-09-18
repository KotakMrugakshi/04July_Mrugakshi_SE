//session 08(Mini Project)
#include <iostream>
#include <fstream>
using namespace std;
class Content{
public:
    int id;
    char title[50];
    char platform[30];
    int views;
    char status[30];
    void display(){
        cout << "\nID       : " << id;
        cout << "\nTitle    : " << title;
        cout << "\nPlatform : " << platform;
        cout << "\nViews    : " << views;
        cout << "\nStatus   : " << status << endl;
    }
};
void saveToFile(Content contents[], int count){
    ofstream file("mini_project.txt");
    if (!file){
        cout << "\nError opening file!";
    }

    for (int i = 0; i < count; i++)
    {
        file << contents[i].id << endl;
        file << contents[i].title << endl;
        file << contents[i].platform << endl;
        file << contents[i].views << endl;
        file << contents[i].status << endl;
    }
  file.close();
}
void loadFromFile(Content contents[], int &count){
    ifstream file("mini_project.txt");
    if (!file){
        //return;
    }
    count = 0;
    while (file >> contents[count].id){
        file.ignore();
        file.getline(contents[count].title, 50);
        file.getline(contents[count].platform, 30);
        file >> contents[count].views;
        file.ignore();
        file.getline(contents[count].status, 30);
        count++;
        if (count >= 100)
            break;
    }
    file.close();
}
void addContent(Content contents[], int &count){
    if (count >= 100){
        cout << "\nMaximum content limit reached!";
        return;
    }
    contents[count].id = count + 1;
    cin.ignore();
    cout << "\nEnter Content Title: ";
    cin.getline(contents[count].title, 50);
    cout << "Enter Platform: ";
    cin.getline(contents[count].platform, 30);
    cout << "Enter Views: ";
    cin >> contents[count].views;
    cin.ignore();
    cout << "Enter Status (Idea/Published/Draft): ";
    cin.getline(contents[count].status, 30);
    count++;
    saveToFile(contents, count);
    cout << "\nContent added successfully!";
}
void displayContent(Content contents[], int count){
    if (count == 0){
        cout << "\nNo content available!";
        return;
    }
    cout << "\n========== CREATOR CONTENT ==========\n";
    for (int i = 0; i < count; i++){
        contents[i].display();
        cout << "\n-----------------------------------";
    }
}
void editContent(Content contents[], int count){
    int id;
    cout << "\nEnter Content ID to edit: ";
    cin >> id;
    for (int i = 0; i < count; i++){
        if (contents[i].id == id){
            cin.ignore();
            cout << "\nEnter New Title: ";
            cin.getline(contents[i].title, 50);
            cout << "Enter New Platform: ";
            cin.getline(contents[i].platform, 30);
            cout << "Enter New Views: ";
            cin >> contents[i].views;
            cin.ignore();
            cout << "Enter New Status: ";
            cin.getline(contents[i].status, 30);
            saveToFile(contents, count);
            cout << "\nContent updated successfully!";
        }
    }
    cout << "\nContent ID not found!";
}
void deleteContent(Content contents[], int &count){
    int id;
    cout << "\nEnter Content ID to delete: ";
    cin >> id;
    for (int i = 0; i < count; i++){
        if (contents[i].id == id){
            // Shift next elements one position left
            for (int j = i; j < count - 1; j++){
                contents[j] = contents[j + 1];
            }
            count--;
            saveToFile(contents, count);
            cout << "\nContent deleted successfully!";
            return;
        }
    }
    cout << "\nContent ID not found!";
}
main(){
    Content contents[100];
    int count = 0;
    int choice;
    // Load old data
    loadFromFile(contents, count);

    do{
        cout << "\n\n====================================";
        cout << "\n       CREATOR DASHBOARD LITE";
        cout << "\n====================================";
        cout << "\n1. Add Content";
        cout << "\n2. Display Content";
        cout << "\n3. Edit Content";
        cout << "\n4. Delete Content";
        cout << "\n5. Exit";
        cout << "\n====================================";
        cout << "\nEnter Your Choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            addContent(contents, count);
            break;
        case 2:
            displayContent(contents, count);
            break;
        case 3:
            editContent(contents, count);
            break;
        case 4:
            deleteContent(contents, count);
            break;
        case 5:
            cout << "\nThank you for using Creator Dashboard!";
            break;
        default:
            cout << "\nInvalid choice!";
        }
    } while (choice != 5);
}
