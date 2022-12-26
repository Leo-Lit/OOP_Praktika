#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Collection {
public:

    void add_movie(){
        string title;
        cout << "Enter title: "; cin >> title;
        m_movies.push_back(title);
    };

    void position_info() {
        int numbr;
        cout << "Position number: "; cin >> numbr;
        if (numbr >= 1 || numbr <= m_movies.size()) {
            cout << m_movies[numbr-1] << endl;;
        }
        else
            cout << "No such movie" << endl;
    };

    void number_of_movies() { 
        if (m_movies.size() != 0) { cout << "There are " << m_movies.size() << " titles" << endl; }
        else { cout << "No movies:(" << endl; }
    };

    void list_of_movies() {
        int i = 1;
        for (string title : m_movies)
        {
            cout << i << ". " << title << endl;
            i++;
        }
    };

    void delete_movie() {
        int numbr;
        cout << "Movie number: "; cin >> numbr;
        if (numbr >= 1 || numbr <= m_movies.size()){
            cout << m_movies[numbr - 1] << " has been deleted" << endl;;
            m_movies.erase(m_movies.begin() + (numbr-1));
        }
        else
            cout << "No such movie" << endl;
    }
private:
    vector <string> m_movies;
};

int main()
{
    int menu;
    Collection primer;
    do {
        system("CLS");
        puts("1. Add movie");
        puts("2. List of movies");
        puts("3. Number of movies");
        puts("4. Position info");
        puts("5. Delete movie");
        puts("0. Exit");
        cout << endl << "select menu item: "; cin >> menu;
        switch (menu) {
        case 1:
        {
            primer.add_movie();
            system("PAUSE");
            break;
        }
        case 2:
        {
            primer.list_of_movies();
            system("PAUSE");
            break;
        }
        case 3:
        {
            primer.number_of_movies();
            system("PAUSE");
            break;
        }
        case 4:
        {
            primer.position_info();
            system("PAUSE");
            break;
        }
        case 5:
        {
            primer.delete_movie();
            system("PAUSE");
            break;
        }
        }
    } while (menu != 0);
    return 0;
};

