#include <iostream>
#include <fstream>
using namespace std;

int main()
{
// Strings
    string a;
    string asecname;
    string b;
    string c;
    string d;
    string e;
    string f;
    string g;
    string h;
    string z;
// STOP
    cout << "Who are you writing to? (First name only please) ";
    cin >> a;
    cout << "What gift did you get from " << a << "? e.g. 'shirt' ";
    cin >> b;
    cout << "What kind of party did you invite " << a << " to? e.g. 'birthday' ";
    cin >> c;
    cout << "What is \033[4;32myour\033[0m name? ";
    cin >> d;
    cout << "What is this person to you? e.g. 'friend' ";
    cin >> e;
    cout << "How would you describe this " << e << "? e.g. 'cool' ";
    cin >> f;
    cout << "What do you like doing with " << a << "? e.g. 'eating hamburgers' Please input two words. ";
    cin >> g >> z;
    cout << "Here is your letter.\n";
// LETTER RETURN
    cout << "\033[1;32mDear " << a << ",\nThank you so much for getting me my " << b << "! Thank you for coming to my " << c << ". I enjoy " << g << " " << z << " with you. You are a " << f << " " << e << "!\nFrom,\n" << d << "\033[0m\n";
// END LETTER RETURN
    cout << "Open in new file? y/n ";
    string oyorn;
    cin >> oyorn;
    if (oyorn == "y") {
        std::ofstream o("thxgen.txt");
        o << "Dear " << a << ",\nThank you for getting me my " << b << "! Thank you for coming to my " << c << ". I enjoy " << g << " " << z << " with you. You are a " << f << " " << e << "!\nFrom,\n" << d << "\n" << std::endl;
        cout << "Saved to thxgen.txt.";
}
    if (oyorn == "n") {
        cout << "G'bye!";
}

    cout << "\n";
    return 0;
}
