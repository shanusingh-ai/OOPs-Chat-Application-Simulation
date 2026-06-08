# 💬 OOPs Chat Application Simulation

A console-based Chat Application Simulation developed in **C++** using Object-Oriented Programming (OOP) concepts. This project demonstrates user interaction, message exchange, exception handling, inheritance, function overloading, constructor overloading and friend functions.

---

## 📌 Project Overview

The application simulates a basic chat system where users can:

* Create sender and receiver profiles
* Send messages between users
* Validate user input
* Handle runtime exceptions
* Demonstrate core Object-Oriented Programming concepts

This project was developed as part of learning and implementing OOP concepts in C++.

---

## ✨ Features

### 👤 User Management

* Create sender and receiver profiles
* Validate user IDs
* Validate user names

### 💬 Chat Simulation

* Send messages between users
* Display sender and receiver information
* Show chat details

### ⚠️ Exception Handling

The program handles various exceptions such as:

* Invalid User ID
* Empty User Name
* User Not Logged In
* Empty Message
* Message Too Long
* Sender and Receiver Cannot Be Same

### 🔒 Access Control

* Encapsulation using classes
* Protected data members

---

## 🛠️ OOP Concepts Implemented

| Concept                 | Implementation             |
| ----------------------- | -------------------------- |
| Classes & Objects       | User, ChatUser             |
| Inheritance             | ChatUser inherits User     |
| Constructor Overloading | Multiple constructors      |
| Function Overloading    | sendMessage()              |
| Encapsulation           | Data hiding inside classes |
| Exception Handling      | try-catch blocks           |
| Friend Function         | Demonstrated separately    |
| Arrays of Objects       | ChatUser users[2]          |

---

## 📂 Project Files

```text
OOPs-Chat-Application-Simulation/
│
├── chat_application.cpp
├── friendfunction.cpp
└── README.md
```

### File Description

#### chat_application.cpp

Main chat simulation program implementing OOP concepts and exception handling.

#### friendfunction.cpp

Demonstrates the use of Friend Functions in C++.

---

## ▶️ How to Run

### Compile

```bash
g++ chat_application.cpp -o chat
```

### Execute

```bash
./chat
```

### Windows

```bash
g++ chat_application.cpp -o chat.exe
chat.exe
```

---

## 📖 Sample Workflow

1. Enter Sender ID
2. Enter Sender Name
3. Enter Receiver ID
4. Enter Receiver Name
5. Type Message
6. Display Chat Details

---

## 🎯 Learning Outcomes

Through this project, I gained practical experience in:

* Object-Oriented Programming
* Inheritance
* Function Overloading
* Constructor Overloading
* Exception Handling
* Friend Functions
* Input Validation
* C++ Programming

---

## 🚀 Future Improvements

* Multi-user chat support
* Chat history storage
* File handling integration
* Login authentication system
* Graphical User Interface (GUI)
* Database integration

---

## 👨‍💻 Project Team

- Shanu Singh
- Shivam Rajput
- Sandeep Gupta

MCA Students, IIIT Vadodara

GitHub: https://github.com/shanusingh-ai

---

⭐ If you found this project useful, consider giving it a star on GitHub.
