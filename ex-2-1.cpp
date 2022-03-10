#include <iostream>
#include <string>

using namespace std;

class Libro {
public:
    Libro() {
        title = "";
        pages = 0;
    };
    Libro (int pages, string title) {
        this->pages = pages;
        this->title = title;
    }
    int get_pages () {
        return this->pages;
    }
    string get_title () {
        return this->title;
    }
    void set_pages (int new_pages) {
        this->pages = new_pages;
    }
    void set_title (string new_title) {
        this->title = new_title;
    }
private:
    string title;
    int pages;
};


int main () {
    Libro l_1 (30, "ciao");
    Libro l_2 (100, "Depe");
    Libro l_3 (200, "ciaooo");
    cout << l_1.get_title() << l_1.get_pages() << endl;
    l_1.set_pages(50);
    l_1.set_title("luce");
    cout << l_1.get_pages() << l_1.get_title() << endl;
    return 0;

}
