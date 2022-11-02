#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    string Owner;
    int subscribersCount;
    list<string> PublishedVideoTitles;
    
public:
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
    void subscribe(){
        subscribersCount++;
    }
    void unsubscribe(){
        if(subscribersCount>0)
        subscribersCount--;
    }
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};
int main()
{
    YoutubeChannel ytChannel1("codeBeauty", "Saldina");
    ytChannel1.PublishVideo("C++ for beginners video 1");
    ytChannel1.PublishVideo("HTM & CSS video 1");
    ytChannel1.PublishVideo("C++ OOP video1");
    ytChannel1.subscribe();
    ytChannel1.unsubscribe();
    ytChannel1.unsubscribe();
    ytChannel1.GetInfo();
    
    

  

    return 0;
}
