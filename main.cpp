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
    cout << "1 - Edit Username\n"
         << "2 - Edit Email\n"
         << "3 - Edit Password\n"
         <<"4 - Add your age\n";
    int user_input;
    cout << "Enter number: ";
    cin >> user_input;

    if(user_input == 1) {
        edit_username();
    } else if(user_input == 2) {
        edit_email();
    } else if(user_input == 3) {
        edit_pass();
    } else if(user_input == 4) {
        set_age();
    }
}

void show_profile (bool func) {
//  Profile info
    if(func) {
        cout << "Your username: " << new_user.get_name() << endl;
        cout << "Your email: " << new_user.get_email() << endl;
        cout << "Password: " << new_user.get_pass() << endl;
    }
    cout << "Hit 1 to edit a profile\n"
         << "Or enter 0 to go back to main page\n";
    int user_input;
    cin >> user_input;

    if (user_input == 1){
        edit_profile();
    }

}

int register_new_acc() {
    //new account details
    cout << "Do you want to register with new account  ? (y/n)" << endl;
    char answer;
    cin >> answer;

    if(answer == 'y') {
        cout << "Enter your Username: ";
        string new_username;
        cin >> new_username;
        cout << endl;

        cout << "Enter your Email: ";
        string new_email;
        cin >> new_email;
        cout << endl;

        cout << "Enter new password: ";
        string new_pass;
        cin >> new_pass;
        cout << endl;


        create_new_acc(new_username, new_email, new_pass);
        show_profile(wants_to_login());
    } else if(answer == 'n') {
        cout << "Exit" << endl;
        return 0;
    }
}

void login() {
    string username;
    string password;

    //login details
    cout << "Enter username: \n";
    cin >> username;
    cout << "Enter password: \n";
    cin >> password;

    if(username == new_user.get_name() && password == new_user.get_pass()) {
        cout << "Logged in successfully!\n";
    }
    cout << "Something is wrong, try again!\n";
}


//void say_hello() {
    //cout << "\n\n1 - Create New Account\n"
         //<< "2 - Login\n\n"
         //<< "Enter the number: ";
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

