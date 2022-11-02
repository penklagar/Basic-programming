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
    int ContentQuality;
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
    void CheckAnalytics() {
        if (ContentQuality<5)
            cout<< Name <<" has bad content quality"<<endl;
        else
            cout<< Name <<" has great content"<<endl;
    }
};

class CookingYouTubeChannel : public YoutubeChannel {
public:
    CookingYouTubeChannel (string name, string owner) : YoutubeChannel(name, owner){
        
    }
    void Practice() {
        cout<<Owner<<" is practice cooking, learning new recipes, experimenting with spices..."<<endl;
        ContentQuality++;
    }
};
class SingersYouTubeChannel : public YoutubeChannel {
public:
    SingersYouTubeChannel (string name, string owner) : YoutubeChannel(name, owner){
            
    }
    void Practice() {
        cout<<Owner<<" is taking singing classes, learning new songs, elearning how to dance..."<<endl;
        ContentQuality++;
    }
};


int main()
{
    CookingYouTubeChannel ytCookingChannel("Amyy's kitchen", "Amy");
    SingersYouTubeChannel ytsingersChannel("John sings", "John");
 
    ytCookingChannel.Practice();
    ytsingersChannel.Practice();
    ytsingersChannel.Practice();
    ytsingersChannel.Practice();
    ytsingersChannel.Practice();
    ytsingersChannel.Practice();
    ytsingersChannel.Practice();
    
    
    YoutubeChannel* yt1 = &ytCookingChannel;
    YoutubeChannel* yt2 = &ytsingersChannel;
    
    yt1 -> CheckAnalytics();
    yt2 -> CheckAnalytics();
     
    
    return 0;
}
