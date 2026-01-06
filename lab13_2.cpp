#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);
            

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void updateImage(bool sas[N][M],int a,int b ,int c){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            
            if(sqrt(pow(i-b,2)+pow(j-c,2))<=a-1) sas[i][j]=1;
             
        }
    }
}
void showImage(const bool hea[N][M]){
          cout<<"------------------------------------------------------------------------"<<"\n";
          for(int i=0;i<N;i++){
              cout<<"|";
              for(int j=0;j<M;j++){if(hea[i][j]==0) cout<<" ";
              if(hea[i][j]==1) cout<<"*";
                  }
              cout<<"|"<<"\n";
              
          }
          cout<<"------------------------------------------------------------------------"<<"\n";
    
    
    
}

