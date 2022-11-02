#include<iostream>
#include<string>
#include<list>
using namespace std;

struct YoutubeChannel {
    string Name;
    int SubscribersCount;
    
    YoutubeChannel (string name, int subscriberscount){
        Name = name;
        SubscribersCount = subscriberscount;
    }
    bool operator == (const YoutubeChannel&channel) const {
        return this ->Name == channel.Name;
    }
};

ostream& operator<<(ostream& COUT, YoutubeChannel& ytchannel){
    COUT << "Name: " << ytchannel.Name <<endl;
    COUT << "Subsctriberscount: " << ytchannel.SubscribersCount << endl;
    return COUT;
}

struct Mycollection {
    list<YoutubeChannel>myChannels;
    
    void operator+=(YoutubeChannel& channel){
        this ->myChannels.push_back(channel);
    }
    void operator-=(YoutubeChannel& channel){
        this ->myChannels.remove(channel);
    }
    
    
};

ostream& operator <<(ostream& COUT, Mycollection& myCollection){
    for (YoutubeChannel ytChannel :myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}



int main()
{
    YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
    YoutubeChannel yt2 = YoutubeChannel("My second channel", 80000);

    //cout<<yt1<<yt2;
    //operator<<(cout, yt1);
    
    Mycollection myCollection;
    
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;
    
    cout << myCollection;
    
    
   return 0;
}
