//CodeBeauty OOP Tutorial 2

#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
private: //access modifier
    string Name;
    string OwnerName;
    int SubscribersCount;
    list <string> PublishedVideoTitles;

public:
    YouTubeChannel(string name, string ownerName) //constructor
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo() //method
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

    void Subscribe()
    {
        SubscribersCount++;
    }

    void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishedVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YouTubeChannel ytChannel("CodeBeauty", "Saldina");

    ytChannel.PublishedVideo("C++ for beginners");
    ytChannel.PublishedVideo("HTML and CSS for beginners");
    ytChannel.PublishedVideo("C++ OOP");

    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();

    ytChannel.Unsubscribe();

    ytChannel.GetInfo();

    return 0;
}
