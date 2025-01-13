/*  T02: Collaboration Teamwork

    Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Original code and ASCII art by Dr. Jan Pearce, Berea College

    Edits made by:
    <Charle Ryland>
    <Chris Georgiev>
 */
#include <iostream>
using namespace std;

int main() {

    int ducknum;

    cout << " Have you ever hver heard of rubber duck debugging?" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " How many rubber ducks do you want to see? ";
    cin >> ducknum;

    for (int i = 0; i < ducknum; i++) {
        cout << "  <>              <>   " << endl;
        cout << "       <>              " << endl;
        cout << "            <>         " << endl;
        cout << "      <>       <>      " << endl;
        cout << "                       " << endl;
        cout << "   <>           __     " << endl;
        cout << "             <(<> )___-" << endl;
        cout << "               ( .__> /" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "|||||||||||||||||||||||" << endl;
    }

    return 0;
}
