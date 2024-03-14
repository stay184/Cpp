//Polymorphism
//CodeBeauty OOP Tutorial 5

//object has same method but diff behavior

#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel //base class
{
private: //access modifier
    string Name;
    int SubscribersCount;
    list <string> PublishedVideoTitles;
protected: //available in derived classes
    string OwnerName;
    int ContentQuality;

public:
    YouTubeChannel(string name, string ownerName) //constructor
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    }

    void GetInfo() //method writes information
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
    void CheckAnalytics()
    {
        if (ContentQuality < 5)
        {
            cout << Name << " has bad quality content" << endl;
        }

        else
        {
            cout << Name << " has great content" << endl;
        }
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
        cout << OwnerName << " is practicing fanchants and dances..." << endl;
        ContentQuality++;
    }
};

class ArtistYouTubeChannel: public YouTubeChannel //inheritance
{
public:
    ArtistYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) //constructor
    {

    }
    void Practice()
    {
        cout << OwnerName << " is producing and writing songs..." << endl;
        ContentQuality++;
    }
};

int main()
{
    fanYouTubeChannel fanYtChannel("Stayy", "Stay");
    ArtistYouTubeChannel artistYtChannel("Stray Kids", "3RACHA");

    fanYtChannel.Practice();
    artistYtChannel.Practice();
    artistYtChannel.Practice();
    artistYtChannel.Practice();
    artistYtChannel.Practice();
    artistYtChannel.Practice();

    YouTubeChannel *yt1 = &fanYtChannel; //pointer to derived class
    YouTubeChannel *yt2 = &artistYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}
