#include <iostream>
using namespace std;

class Item {
public:
    int code;
    float price;

    void getData() {
        cout << "Enter item code and price: ";
        cin >> code >> price;
    }

    void showData() const {
        cout << "Code: " << code << ", Price: $" << price << endl;
    }
};

class ShoppingList {
    Item items[10];
    int itemCount;


    ShoppingList() : itemCount(0) {}

    void addItem() {
        if (itemCount < 10) {
            items[itemCount++].getData();
        } else {
            cout << "List is full." << endl;
        }
    }

    void deleteItem() {
        int code;
        cout << "Enter item code to delete: ";
        cin >> code;
        int index = -1;
        for (int i = 0; i < itemCount; i++) {
            if (items[i].code == code) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = index; i < itemCount - 1; i++) {
                items[i] = items[i + 1];
            }
            itemCount--;
            cout << "Item deleted successfully.\n";
        } else {
            cout << "Item code not found.\n";
        }
    }

    void displayItems() const {
        if (itemCount == 0) {
            cout << "The list is empty." << endl;
        } else {
            for (int i = 0; i < itemCount; i++) {
                items[i].showData();
            }
        }
    }

    void displayTotalValue() const {
        float total = 0;
        for (int i = 0; i < itemCount; i++) {
            total += items[i].price;
        }
        cout << "Total value of all items: $" << total << endl;
    }
};

int main() {
    ShoppingList list;
    int option;

    while (true) {
        cout << "1: Add Item, 2: Display All Items, 3: Delete Item, 4: Display Total Value, 5: Exit >> ";
        cin >> option;
        switch (option) {
            case 1: list.addItem(); break;
            case 2: list.displayItems(); break;
            case 3: list.deleteItem(); break;
            case 4: list.displayTotalValue(); break;
            case 5: return 0;
            default: cout << "Invalid option.\n";
        }
    }
}
