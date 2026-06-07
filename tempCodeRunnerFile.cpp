#include <iostream>
#include <cstring>
#include <stdexcept>
using namespace std;

class User {
protected:
    int userId;
    char name[30];

public:
    void setId(int id) {

        // EXCEPTION: Invalid User ID
        if(id <= 0)
            throw invalid_argument("Invalid User ID! ID must be positive.");

        userId = id;
    }

    void setUser(const char n[]) {

        // EXCEPTION: Empty Name
        if(strlen(n) == 0)
            throw runtime_error("Name cannot be empty!");

        strcpy(name, n);
    }

    void showUser() {
        cout << "User ID : " << userId << endl;
        cout << "Name    : " << name << endl;
    }
};


class ChatUser : public User {
    char message[100];
    bool isLoggedIn;

public:
    ChatUser() {
        strcpy(message, "No message");
        isLoggedIn = false;
    }

    // Constructor Overloading
    ChatUser(int id, const char n[], const char msg[]) {
        setId(id);
        setUser(n);
        isLoggedIn = true;
        sendMessage(msg);
    }

    void login() {
        isLoggedIn = true;
    }

    // Function Overloading
    void sendMessage() {
        strcpy(message, "Hi");
    }

    void sendMessage(const char msg[]) {

        // EXCEPTION: Not Logged In
        if(!isLoggedIn)
            throw runtime_error("User not logged in!");

        // EXCEPTION: Empty Message
        if(strlen(msg) == 0)
            throw runtime_error("Message cannot be empty!");

        // EXCEPTION: Message Too Long
        if(strlen(msg) > 100)
            throw overflow_error("Message too long!");

        strcpy(message, msg);
    }

    void showUser() {
        User::showUser();
        cout << "Message : " << message << endl;
    }

    void chatWith(ChatUser &receiver) {
        cout << "\n----- CHAT DETAILS -----\n";
        cout << "From    : " << name << endl;
        cout << "To      : " << receiver.name << endl;
        cout << "Message : " << message << endl;
    }
};


int main() {

    ChatUser users[2];
    char name1[30], name2[30];
    char msg[100];
    int id;

    try {

        cout << "Enter Sender ID: ";
        cin >> id;
        users[0].setId(id);

        cout << "Enter Sender Name: ";
        cin.ignore();
        cin.getline(name1, 30);
        users[0].setUser(name1);

        users[0].login();   // login before sending message

        cout << "Enter Receiver ID: ";
        cin >> id;
        users[1].setId(id);

        cout << "Enter Receiver Name: ";
        cin.ignore();
        cin.getline(name2, 30);
        users[1].setUser(name2);

        cout << "Type Message: ";
        cin.getline(msg, 100);
        users[0].sendMessage(msg);

        users[0].chatWith(users[1]);

        cout << "\nSender Details After Chat:\n";
        users[0].showUser();
    }
    catch(exception &e) {
        cout << "\nException: " << e.what() << endl;
    }

    return 0;
}