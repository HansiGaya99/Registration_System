#include <iostream>
using namespace std;


class User {
public:
    string user_name;
    string user_email;
    string password;
    int age{};

    string get_name() const {
        return user_name;
    }

    string get_email() const {
        return user_email;
    }

    string get_pass() const {
        return password;
    }

    int get_age() const {
        return age;
    }
};

//registration for new user
User new_user;
void create_new_acc(string name = "user1", string email = "defmail", string pass = "defpass") { // Default values for arguments
    new_user.user_name = name;
    new_user.user_email = email;
    new_user.password = pass;
}



// login
bool wants_to_login() {
    cout << "Your account has been successfully created!\n\nDo you want to login? (y/n)\n";
    char want_to_login;
    cin >> want_to_login;

    if(want_to_login == 'y') {
        return true;
    } else {
        return false;
    }
}

void edit_username() {
    string new_username;
    cout << "Enter new Username: ";
    cin >> new_username;
    new_user.user_name = new_username;
}

void edit_email() {
    string new_email;
    cout << "Enter new Email: ";
    cin >> new_email;
    new_user.user_email = new_email;
}

void edit_pass() {
    string new_pass;
    cout << "Enter new Password: ";
    cin >> new_pass;
    new_user.password = new_pass;
}

void set_age() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    new_user.age = age;
}


void edit_profile() {
    //edit details
}

void show_profile (bool func) {
//  Profile info
    
}

int register_new_acc() {
    //new account details
}

void login() {
    string username;
    string password;

    //login details
}


void say_hello() {
    cout << "\n\n1 - Create New Account\n"
         << "2 - Login\n\n"
         << "Enter the number: ";
}

void start_menu() {
    say_hello();


    int user_first_input;
    while(true) {
        cin >> user_first_input;
        cout << "Enter number: ";

        if(user_first_input == 0) {
            cout << "Exiting..\n";
            cout << endl;
            say_hello();
            break;
        } else if(user_first_input == 1) {
            register_new_acc();
        } else if(user_first_input == 2) {
            login();
        } else {
            cout << "Wrong number\n";
        }
    }
}

int main() {

    start_menu();
}

