//Inheritance
//CodeBeauty OOP Tutorial 4

#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
private: //access modifier
    string Name;
    int SubscribersCount;
    list <string> PublishedVideoTitles;
protected:
    string OwnerName;

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

class fanYouTubeChannel: public YouTubeChannel //inheritance
{
public:
    fanYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) //constructor
    {

    }
    void Practice()
    {
        cout << OwnerName << " is practicing fanchants, lyrics and dances..." << endl;
    }
};

int main()
{
    fanYouTubeChannel fanYtChannel("Stayy", "Stay");
    fanYouTubeChannel fanYtChannel2("Atiny", "Ateez");
    //fanYtChannel.PublishedVideo("Volcano");
    //fanYtChannel.PublishedVideo("Eternity");
    //fanYtChannel.Subscribe();
    fanYtChannel.Practice(); //only for fanYouTubeChannel
    fanYtChannel2.Practice(); //only for fanYouTubeChannel

    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    //ytChannel.Practice();

    return 0;
}
