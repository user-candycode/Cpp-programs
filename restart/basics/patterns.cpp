#include<iostream>

using namespace std;

int main(){
    /*
        // draw * * * *
                * * * *
                * * * *
                * * * *  where no of stars in each row are equal to no of rows
        
    int row = 7;
    int i = 1;
    while(i<=row){
        int j = 1;
        while(j<=row) {
            // cout<<" * ";
            cout<<" "<< i<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    */

   /*
   // draw 1 2 3 4 5
           1 2 3 4 5
           1 2 3 4 5
           1 2 3 4 5 
           1 2 3 4 5  also do reverse of row numbering

    int row = 7;
    int i = 1;
    while(i<=row){
        int j = 1;
        while(j<=row) {
            // cout<<" * ";
            cout<<" "<< row-j+1<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
   */

    /*
    // Draw 1 2 3
            4 5 6
            7 8 9 rows and colums are same and the data is counting of number

        int row;
   row = 7;

   int i=1;
   int count=1;
   while(i<=row){
        int j=1;
        while(j<=row){  
            if(count > 9){
                cout<<" "<<count<<" ";
            }else{
                cout<<" 0"<<count<<" ";
            }
        count++;
        j++;
        }
        cout<<"\n";
        i++;
   }
    */

   
    /*
        // Draw *
                * *
                * * * n=3
    
    int n;
    n = 10;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            if(j>i){
                cout<<"  ";
            }else{
                cout<<" *";
            }
            j++;
        }
        cout<<"\n";
        i++;
    }
    */

    /*
        Draw 1
             2 2
             3 3 3
             4 4 4 4 
        int n;
    n = 9;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            if(col>row){
                cout<<"  ";
            }else{
                cout<<" "<<row;
            }
            col++;
        }
        cout<<"\n";
        row++;
    }
    */


   /*
        // Draw 1
                2 3
                3 4 5
                4 5 6 7 n=4
           int n;
    n = 4;

    int row=1;
    while(row<=n){

        int col=1;
        int count = row;
        while(col<=n){
        
            if(col>row){
                cout<<"  ";
            }else{
                cout<<" "<<count;
                count++;
            }
        
            col++;    
        }
        cout<<"\n";
        row++;
    }

    // without using count
          int n;
    n = 4;

    int row=1;
    while(row<=n){

        int col=1;
        
        while(col<=n){
        
            if(col>row){
                cout<<"  ";
            }else{
                cout<<" "<<row +col -1;
            }
        
            col++;    
        }
        cout<<"\n";
        row++;
    }
   */
    

    /*
        // Draw 1
                2 1
                3 2 1
                4 3 2 1 
    
    int n=4;
    int row=1,col;
    while(row<=n){
        col=n;
        while(col>=1){
            if( (n-col+1) <= row){
                cout<<" "<<row - (n-col+1) +1 <<" ";
            }else{
                cout<<"   ";
            }
            col--;
        }
        cout<<"\n";
        row++;
   }

    */


    /*
        Draw              1
                        1 2 1
                      1 2 3 2 1
                    1 2 3 4 3 2 1 
        
    int n=6;
    int row=1;
    while(row<=n){
        int col=1;
        int count =1;
        while(col<=((2*n)-1)){
            if(col<=n){
                if(col>=(n-row+1)){
                    cout<<" "<<count<<" ";
                    count++;
                }else{
                    cout<<"   ";
                }
            }
           else{
                if(col<= n+row-1){
                    count--;
                    cout<<" "<<count-1<<" ";
                    
                }
           }
            col++;
        }
        cout<<"\n";
        row++;
    }
    */


   /*
        // Draw 
                1 2 3 4 5 5 4 3 2 1
                1 2 3 4 * * 4 3 2 1
                1 2 3 * * * * 3 2 1
                1 2 * * * * * * 2 1
                1 * * * * * * * * 1   n=5

            int n = 5;
    int row = 1;

    while(row<=n){
        int col=1;
        int count = 1;
        while(col<=2*n){
            if(col<=5){
                if(col<=n-row+1){
                    cout<<" "<<count<<" ";
                }else{
                    cout<<" * ";
                }
                count++;
            }else{
                count--;

                if(row==1){
                    cout<<" "<<count<<" ";
                }else if(row>1){
                    if(col<=n+row-1){
                        cout<<" * ";
                    }else{
                        cout<<" "<<count<<" ";
                    }
                }
            }            
            col++;
        }
        cout<<"\n";
        row++;
    }
   */



    return 0;
}