#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

class Pet {
public:
    string name;
    int hunger;
    int happiness;

    Pet(string petName) : name(petName), hunger(50), happiness(50) {}

    void feed() {
        if (hunger < 90) {
            hunger += 10;
            cout << "Pet has been fed." << endl;
        } else {
            cout << "Pet is already full and cannot eat more." << endl;
        }
    }

    void play() {
        if (happiness < 90) {
            happiness += 10;
            cout << "Pet played and is happier now." << endl;
        } else {
            cout << "Pet is very happy and doesn't need more playtime." << endl;
        }
    }

    void Check() const {
        cout << name << "'s hunger: " << hunger << endl;
        cout << name << "'s happiness: " << happiness << endl;
    }

    bool IsAlive() const {
        return hunger > 0 && happiness > 0;
    }
};

void Menue() {
    cout << "\n1. Adopt Pet" << endl;
    cout << "2. Feed Pet" << endl;
    cout << "3. Play with Pet" << endl;
    cout << "4. Check Status" << endl;
    cout << "5. End Game" << endl;
    cout << "\nChoose an option: ";
}

int main() {
    fastIO();

    string petName;
    cout << "Enter your pet name: ";
    cin >> petName;

    Pet MyPet(petName);
    int choice;

    // while loop
    // display menu function
    // cin >> choice
    // use if or switch to feed, play, check, or end game based on choice
    // if pet is not alive, display message and end the game


    return 0;
}
