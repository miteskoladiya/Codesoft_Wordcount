#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string fileName, word;

    cout << "Enter the name of the text file: ";
    cin >> fileName;

    ifstream File(fileName); // File reading
    if (!File)
    {
        cout << "File does not exsist" << endl;
        return 0;
    }
    int count = 0;
    while (File >> word)
    {
        count++;
    }
    cout << "Total word in file: " << count << endl;
    File.close();
    return 0;
}