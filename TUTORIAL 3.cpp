//CodeBeauty OOP Tutorial 3

#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
public: //access modifier
    string Name;
    string OwnerName;
    int SubscribersCount;
    list <string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName) //constructor
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscribers Count: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle: PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
};

int main()
{
    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML and CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    YouTubeChannel ytChannel2("StaySings", "Stay");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    return 0;
}

