
#include <iostream>
#include <vector>
using namespace std;

class Task {
    string taskName;
public:
    Task(string t) : taskName(t) {}
    void show() const {
        cout << "Task: " << taskName << endl;
    }
};

class TaskManager {
    vector<Task> tasks;
public:
    void addTask(const Task& t) {
        tasks.push_back(t);
    }
    void showTasks() const {
        for (const auto& t : tasks)
            t.show();
    }
};

int main() {
    TaskManager manager;
    manager.addTask(Task("Study C++"));
    manager.addTask(Task("Practice DSA"));
    manager.showTasks();
    return 0;
}
