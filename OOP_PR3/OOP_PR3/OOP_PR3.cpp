#include <iostream>
#include <string>
#include <vector>
using namespace std;
//============================
// NASLEDOVANIE NA 55 STROKE |
//============================
class Collection {
public:
    Collection();
    Collection(int size) { m_size = m_movies.size(); }
    void add_movie() {
        string title;
        cout << "Enter title: "; cin >> title;
        m_movies.push_back(title);
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
        if (numbr >= 1 || numbr <= m_movies.size()) {
            cout << m_movies[numbr - 1] << " has been deleted" << endl;;
            m_movies.erase(m_movies.begin() + (numbr - 1));

        }
        else
            cout << "No such movie" << endl;
    }
protected:
    vector <string> m_movies; int m_size;
};

class DopInfo : public Collection {
public:
    void producer() {
        string name;
        cout << "Enter producer: "; cin >> name;
        m_producer.push_back(name);
    };
    void scripter() {
            string name;
            cout << "Enter scriptwriter: ";  cin >> name;
            m_script.push_back(name);
        };
    void genre() {
        string g;
        cout << "Enter genre: "; cin >> g;
        m_genre.push_back(g);
    }
    void position_info(int numbr) {
        if (numbr >= 1 && numbr <= m_size) {
            cout << m_movies[numbr - 1] << endl;
            cout << "Rejiser: " << m_producer[numbr - 1] << endl;
            cout << "Scenarist: " << m_script[numbr - 1] << endl;
            cout << "Janr: " << m_genre[numbr - 1] << endl;
        }
        else
            cout << "No such movie" << endl;
    }
private:
    vector <string> m_producer, m_genre, m_script;
};

int main()
{
    int menu;
    Collection primer;
    DopInfo bolsche;
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
            bolsche.producer();
            bolsche.scripter();
            bolsche.genre();
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
            int numbr;
            cout << "Position number: "; cin >> numbr;
            bolsche.position_info(numbr);
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

