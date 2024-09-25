 #include <iostream>
 using namespace std;

 int main(){
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter number of columns : ";
    cin>>m;
    cout<<endl;

    for(int row=0;row<n;row=row+1){
    // first row and last row
        if(row==0 || row==n-1){
            for(int col=0;col<m;col=col+1){
            cout<<"* ";
        }
        }
        else{
            cout<<"* ";
            for (int col=1;col<m-1;col=col+1){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
 }