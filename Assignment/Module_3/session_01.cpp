// Session 01
#include <iostream>
using namespace std;
// PART 1 & 2: PROCEDURAL STYLE
string tasks[5];       
string status[5];     
int taskCount = 0;
void addTaskC(string title){
    if (taskCount < 5){
        tasks[taskCount] = title;
        status[taskCount] = "PENDING";
        taskCount++;
    }
    else{
        cout << "Task list is full!" << endl;
    }
}
// Mark task as DONE
void markTaskDone(int index){
    if (index >= 0 && index < taskCount){
        status[index] = "DONE";
    }
    else{
        cout << "Invalid task index!" << endl;
    }
}
// Display all tasks
void showTasksC(){
    cout << "\n----- PROCEDURAL C-STYLE TASK LIST -----\n";
    for (int i = 0; i < taskCount; i++){
        cout << i + 1 << ". "
             << tasks[i] << " - "
             << status[i] << endl;
    }
}
// PART 3: OOP STYLE - TASK CLASS
class Task{
private:
    string title;
    bool isDone;

public:
    // Default constructor
    Task(){
        title = "";
        isDone = false;
    }
    // Constructor with title
    Task(string t){
        title = t;
        isDone = false;
    }
    // Set task title
    void setTitle(string t){
        title = t;
    }
    // Mark task as DONE
    void markDone(){
        isDone = true;
    }
    // Display task
    void display(){
        cout << title;
        if (isDone)
            cout << " - DONE";
        else
            cout << " - PENDING";
        cout << endl;
    }
};
// PART 4: OOP STYLE - TASKLIST CLASS
class TaskList{
private:
    Task taskArray[5];
    int count;
public:
    // Constructor
    TaskList(){
        count = 0;
    }
    // Add Task
    void addTask(string title){
        if (count < 5){
            taskArray[count].setTitle(title);
            count++;
        }
        else{
            cout << "Task list is full!" << endl;
        }
}
    // Mark Task Done
    void markTaskDone(int index){
        if (index >= 0 && index < count){
            taskArray[index].markDone();
        }
        else{
            cout << "Invalid task index!" << endl;
        }
    }
    // Show all tasks
    void showTasks(){
        cout << "\n----- OOP TASK LIST -----\n";
        for (int i = 0; i < count; i++){
            cout << i + 1 << ". ";
            taskArray[i].display();
        }
    }
};
main(){
    // PART 1 & 2: PROCEDURAL C-STYLE
    addTaskC("Study C Language");
    addTaskC("Practice Pointers");
    addTaskC("Learn OOP");
    showTasksC();
    // Mark second task as DONE
    markTaskDone(1);
    cout << "\nAfter marking task 2 as DONE:\n";
    showTasksC();
    // PART 3 & 4: OOP
    TaskList myTasks;
    myTasks.addTask("Study C++");
    myTasks.addTask("Practice Classes");
    myTasks.addTask("Learn Inheritance");
    // Mark second task as DONE
    myTasks.markTaskDone(1);
    myTasks.showTasks();
}
