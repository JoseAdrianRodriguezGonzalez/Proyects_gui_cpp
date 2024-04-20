#include<iostream>
void MapOfPossiblePlays(int &cols,int &rows);
char PossibleMoves(char array[3][3],char &move);
void Mapping(char array[3][3],int &cols,int &rows,char &n);
char leer(char &valor);
void check(char array[3][3],char &move);
using namespace std;
int main(){
    char board[3][3],value;
    int col=3,row=3,cont=0;
    MapOfPossiblePlays(col,row);
    while(cont<9){
        value=leer(value);
        PossibleMoves(board,value);
       // Mapping(board,col,row,value);
        cont++;
        cout<<cont;
    }
    return 0;
}
char leer(char &valor){
    cout<<"Escoge el lugar de inicio";
    cin>>valor;
    return valor;
}
void MapOfPossiblePlays(int &cols,int &rows){
    char array[3][3];
    array[0][0]='a';
    array[0][1]='b';
    array[0][2]='c';
    array[1][0]='d';
    array[1][1]='e';
    array[1][2]='f';
    array[2][0]='g';
    array[2][1]='h';
    array[2][2]='i';
    int x=0, y=0;
    for(int _rows=0;_rows<((2*rows));_rows++){
        for(int _cols=0;_cols<cols;_cols++){
            if(_rows%2==1 &&_rows!=5){
                cout<<"__";
            }else{
               if(_rows<5){
                cout<<array[x][y]<<" ";
               }else{
                cout<<"  ";
               }
                y++;
                }
             if(_cols<2){
                    cout<<"|";
                }
            }
        y=0;
        if(_rows%2==0){
        x++;
        }
        cout<<"\n";
    }
}
char PossibleMoves(char array[3][3],char &move){
   switch(move){
    case 'a':
        if(array[0][0]=='x')
        //return array[0][0]='x';
            return 'a';
        else
            return 'b';
        break;
    case 'b':        
        return array[0][1]='x';
        break;
            case 'c':
               
                    return array[0][2]='x';
               
                break;
            case 'd':
               
                    return array[1][0]='x';
               
                break;
            case 'e':
                
                    return array[1][1]='x';
               
                break;
            case 'f':
                
                    return array[1][2]='x';
               
                break;
            case 'g':
                
                    return array[2][0]='x';
                
                break;
            case 'h':
                
                    return array[2][1]='x';
                
                break;
            case 'i':
                
                    return array[2][2]='x';
                
                break;
    }
    return ' ';
}
void check(char array[3][3],char &move){
    for(int i=0;i<3;i++){
        for(int j=0;j<0;j++){
            if((array[i][j]=='x')&&(PossibleMoves(array,move))){
                cout<<"No";
            }
        }
    }
}
void Mapping(char array[3][3],int &cols,int &rows,char &n){
    
    for(int _rows=0;_rows<((2*rows));_rows++){
        for(int _cols=0;_cols<cols;_cols++){
            if(_rows%2==1 &&_rows!=5){
                cout<<"__";
            }else{
                 if((array[_rows/2][_cols]==PossibleMoves(array,n))&&(_rows<5)){
                    cout<<PossibleMoves(array,n)<<" ";
                }else{
                    cout<<"  ";
                    
                }
            }
             if(_cols<2){
                    cout<<"|";
                }
            }
        cout<<"\n";
    } 
}
