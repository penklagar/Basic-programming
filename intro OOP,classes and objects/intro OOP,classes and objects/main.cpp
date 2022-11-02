#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
public:
    string Name;
    string Owner;
    int subscribersCount;
    list<string> PublishedVideoTitles;
};
int main()
{
    YoutubeChannel ytChannel1;
    ytChannel1.Name = "CodeBeauty";
    ytChannel1.Owner = "Saldina";
    ytChannel1.subscribersCount = 1800;
    ytChannel1.PublishedVideoTitles = {"C++ for beginners video 1", "HTM & CSS video 1", "C++ OOP video1"};
    
    YoutubeChannel ytChannel2;
    ytChannel2.Name = "Nerdsclub";
    ytChannel2.Owner = "Manvith";
    ytChannel2.subscribersCount = 100000000;
    ytChannel2.PublishedVideoTitles = {"Pirates of carrebian", "Lord of the Rings", "Interstellar"};
    
    
    cout<<"Name: "<<ytChannel1.Name<<endl;
    cout<<"OwnerName: "<<ytChannel1.Owner<<endl;
    cout<<"Subscriber count: "<<ytChannel1.subscribersCount<<endl;
    cout<<"Videos: "<<endl;
    for (string videoTitle : ytChannel1.PublishedVideoTitles) {
        cout<< videoTitle << endl;
    }
    
    cout<<"Name: "<<ytChannel2.Name<<endl;
    cout<<"OwnerName: "<<ytChannel2.Owner<<endl;
    cout<<"Subscriber count: "<<ytChannel2.subscribersCount<<endl;
    cout<<"Videos: "<<endl;
    for (string videoTitle : ytChannel2.PublishedVideoTitles) {
        cout<< videoTitle << endl;
    }

    return 0;
}
