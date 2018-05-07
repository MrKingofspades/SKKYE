#include "quiz.h"
#include "LL.h"
#include "profiles.h"
#include "networking.h"
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    Tree myTree;
    for (int i = 0; i < 5; i++) {
        myTree.insert(i + 1);
    }
    cout << "Welcome to SKKYE, the hottset new social media on the market!" << endl;
    cout << "Finding friends with similar interests has never been easier." << endl;
    cout << "Our top of the line personality quiz matches you with one of" << endl;
    cout << "our co-founders who you can chat with. They will set you up" << endl;
    cout << "with all of the right people from around the world!" << endl;
    cout << endl;
    
    string first, last;
    string username, password, password1;
    string bio;
    char correct;
    int x, y = 0;
    bool input = true;
    
    cout << "Sign up for SKKYE! << endl;
    cout << "Enter your first name: ";
    cin >> first;
    if (!cin) die();
    cout << "\nEnter your last name: ";
    cin >> last;
    if (!cin) die();
    cout << "\nChoose a username: ";
    cin >> username;
    if (!cin) die();
    cout << "\nChoose a password: ";
    cin >> password;
    if (!cin) die();
    cout << endl;
    while(input){
        cout << "Please enter your password again: ";
        cin >> password1;
        if (!cin) die();
        if (password != password1) cout << "\nPasswords do not match." << endl; 
        if (password == password1) {
            break;
        }
    }
    cout << endl;
    cout << "Create a bio so that your friends can see what you like to do:" << endl;
    cin >> bio;
    if (!cin) die();


    quiz(); //take the quiz
    cout << "Your score is " << total << "." << endl;
    int personality =0;
    if (total >= 12 && total <= 20) personality = myTree.find(1);
    if (total >= 21 && total <= 30) personality = myTree.find(2);
    if (total >= 31 && total <= 40) personality = myTree.find(3); 
    if (total >= 41 && total <= 50) personality = myTree.find(4);
    if (total >= 51 && total <= 60) personality = myTree.find(5);
    PH (personality); //match with co-founder and add or don't add friend
    //chat
}

/* 
    Tree Bst;
    vector <char> vec;
    char letter;

    while (cin){
        cin >> letter;
        if (isdigit(letter))
            break;
        else {
            BST *temp = Bst.head;
            Bst.insert(temp,letter);
        }
    }
    while (cin) {
        cin >> letter;
        if (!cin) break;
        if (!Bst.find(letter))
            die();
        vec.push_back(letter);
    }
    for (char c: vec)
        Bst.print(c);
    cout << "" << endl;
}
*/
