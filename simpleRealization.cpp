#include <iostream>

using namespace std;

int n;
int a[100][100];
int out[100];
int inp[100];


void read_data(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
}

void main_rool(){
    for(int i=0; i<n; i++){
        inp[i] = 0;
        out[i] = 0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!=INT_MAX && a[i][j]!=-1){
                inp[j] +=1;
                out[i] +=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(inp[i]==0 && out[i]!=0){
            cout<<"INput layer : "<<i+1<<endl;
        }
        if(inp[i]!=0 && out[i]==0){
            cout<<"Output layer : "<<i+1<<endl;
        }
    }
}

int main()
{
    read_data();
    main_rool();
    return 0;
}
