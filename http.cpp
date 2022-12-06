#include<bits/stdc++.h>
#include<windows.h>
#include <unistd.h>//sleep
using namespace std;

int main(){
    string url;
    cout<<"enter the url with file name (if no file name, it will be the one which web server defalt)"<<endl;
    cin>>url;
    cout<<"destination is: "<<url<<endl<<"confirm? (y for yes, n for no and exit)"<<endl;
    string con;
    cin>>con;
    if(con=="y"){
            cout<<"enter delay second"<<endl;
            int d;
            cin>>d;
            string command="curl -s -k -I "+url;
            const char *cmd=command.data();
            for(int c=1;c>0;c++){
                cout<<url<<"    request times:"<<c<<endl;
                system(cmd);
                sleep(d);
                system("cls");
           }
    }else{
        exit(0);
    }
}
