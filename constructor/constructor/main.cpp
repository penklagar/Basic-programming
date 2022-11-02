#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
public:
    string Name;
    string Owner;
    int subscribersCount;
    list<string> PublishedVideoTitles;
    
    YoutubeChannel(string name, string owner) {
        Name = name;
        Owner = owner;
        subscribersCount = 0;
    }
    void GetInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"OwnerName: "<<Owner<<endl;
        cout<<"Subscriber count: "<<subscribersCount<<endl;
        cout<<"Videos: "<<endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout<< videoTitle << endl;
        }
    }
    
};
int main()
{
    YoutubeChannel ytChannel1("codeBeauty", "Saldina");
    ytChannel1.PublishedVideoTitles.push_back("C++ for beginners video 1");
    ytChannel1.PublishedVideoTitles.push_back("HTM & CSS video 1");
    ytChannel1.PublishedVideoTitles.push_back("C++ OOP video1");

    YoutubeChannel ytChannel2("Nerdsclub", "Manvith");

    ytChannel1.GetInfo();
    ytChannel2.GetInfo();
    
    

  

    return 0;
}
