#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct activity
{
    char name [10];
    int st;
    int ft;

};
int main()
{
    int n;
    cout<<"Enter the number of Activity:";
    cin>>n;
    activity act[n];
    for(int i=0; i<n; i++){
            cout<<"Enter the name of activity"<<i+1<<":";
            cin>>act[i].name;
             cout<<"Enter the start time of activity"<<i+1<<":";
            cin>>act[i].st;
     cout<<"Enter the finish time of activity"<<i+1<<":";
            cin>>act[i].ft;

    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if (act[i].ft>act[j].ft){
                activity temp=act[i];
                act[i]=act[j];
                act[j]=temp;
            }
        }
    }
    vector <string>selected_activity;
    selected_activity.push_back(act[0].name);
    int c=1;
    int last_ft=act[0].ft;
    for(int i=1; i<n; i++){
        if(act[i].st>=last_ft){
            selected_activity.push_back(act[i].name);
            c++;
            last_ft=act[i].ft;
        }
    }
    cout<<"Total no.of selected activities:"<<c<<endl;
    cout<<"selected activities are"<<endl;
    for(int i=0; i<selected_activity.size(); i++)
        {
        cout<<selected_activity[i] <<" ";
    }
    cout<<endl;

}
