#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    int subscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string Owner;
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

class CookingYouTubeChannel : public YoutubeChannel {
public:
    CookingYouTubeChannel (string name, string owner) : YoutubeChannel(name, owner){
        
    }
    void Practice() {
        cout<<Owner<<" is practice cooking, learning new recipes, experimenting with spices..."<<endl;
    }
};


int main()
{
    /*YoutubeChannel ytChannel1("codeBeauty", "Saldina");
    ytChannel1.PublishVideo("C++ for beginners video 1");
    ytChannel1.PublishVideo("HTM & CSS video 1");
    ytChannel1.PublishVideo("C++ OOP video1");
    ytChannel1.subscribe();
    ytChannel1.unsubscribe();
    ytChannel1.unsubscribe();
    ytChannel1.GetInfo();*/
    
    CookingYouTubeChannel ytCookingChannel("Amyy's kitchen", "Amy");
    CookingYouTubeChannel ytCookingChannel2("John's kitchen", "John");
    /*ytCookingChannel.PublishVideo("Apple Pie");
    ytCookingChannel.PublishVideo("Choclate cake");
    ytCookingChannel.subscribe();
    ytCookingChannel.subscribe();
    ytCookingChannel.GetInfo();*/
    ytCookingChannel.Practice();
    ytCookingChannel2.Practice();
    return 0;
}
