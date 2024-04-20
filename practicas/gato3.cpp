#include<iostream>


using namespace std;
void jugada(char arreglo[5][3],int &cont); //Funcion para cada jugada
void mapping(char arreglo[5][3]);//crea el mapa del juego
void MapOfPossiblePlays();//crea el mapa de posibles jugadas
int winner(char arreglo[5][3]);//muestra el ganador
int main(){
    char decision;
    int contx=0,conto=0;
    do{
        char tablero[5][3]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};//crea el arreglo del tablero
        int cont=0;//inicializa un contador de jugadas
        while((cont<9)&&(winner(tablero)==0)){//si hay menos de 9 jugadas o ya hya un ganador
        cout<<"--------Jugada "<<cont<<"-----------\n";
            MapOfPossiblePlays();//muestra las posibles jugadas en forma de letras
            cout<<"\n";
            mapping(tablero);
            jugada(tablero,cont);//hace una jugada
            winner(tablero);//compara si hay ganador
            cont++;//hace el conteo
        }
            mapping(tablero);
        //muestra los casos de los que ganaron
        switch (winner(tablero))
        {
        case 1:
            cout<<"gano las x";
            contx++;
            break;
        case 2:
            cout<<"Gano las o";
            conto++;
            break;
        default:
            cout<<"empate";
            break;
        }
       
        cout<<"\nquiere volver  jugar? (Y/N)";
        cin>>decision;
        cout<<"Veces que gano la X="<<contx;
        cout<<"\nVeces que gano la O="<<conto<<endl;
    }while(decision=='Y'||decision=='y');

    return 0;
}
/*Muestra el mapa de las posibles jugadas*/
void MapOfPossiblePlays(){
    char array[3][3];
    //Todas las letras posibles de usar para jugar
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
    //crea la matriz
    for(int _rows=0;_rows<((6));_rows++){
        for(int _cols=0;_cols<3;_cols++){
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
}//Hace el mapa colocando los x,o
void mapping(char arreglo[5][3]){
    for(int i=0;i<6;i++){
       
        for(int j=0;j<3;j++){
            
            if(i%2==1 && i!=5){
                cout<<"__";
            }else if(arreglo[i][j]=='x'||arreglo[i][j]=='o'){
                    cout<<arreglo[i][j]<<" ";
                    
                }else{
                cout<<"  ";
                }
            if(j<2){
                cout<<"|";
            }
           
        }
        cout<<"\n";
    }
}//coloca las posiciones
void jugada(char arreglo[5][3],int &cont){
    char valor;
    cin>>valor;
    switch(valor){
        case 'a':
            if(cont%2==0){
                if(arreglo[0][0]=='x'||arreglo[0][0]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[0][0]='x';
                }
            }else{
              if(arreglo[0][0]=='x'||arreglo[0][0]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[0][0]='o';
                }  
            }    
            break;
        case 'b':
            if(cont%2==0){
                if(arreglo[0][1]=='x'||arreglo[0][1]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[0][1]='x';
                }
            }else{
                if(arreglo[0][1]=='x'||arreglo[0][1]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[0][1]='o';
                }
            }
            break;
        case 'c':
            if(cont%2==0){
                if(arreglo[0][2]=='x'||arreglo[0][2]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[0][2]='x';
                }
            }else{
                if(arreglo[0][2]=='x'||arreglo[0][2]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[0][2]='o';
                }
            }
            break;
        case 'd':
            if(cont%2==0){
                if(arreglo[2][0]=='x'||arreglo[2][0]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[2][0]='x';
                }
            }else{
                if(arreglo[2][0]=='x'||arreglo[2][0]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[2][0]='o';
                }
            }
            break;
        case 'e':
            if(cont%2==0){
                if(arreglo[2][1]=='x'||arreglo[2][1]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[2][1]='x';
                }
            }else{
                if(arreglo[2][1]=='x'||arreglo[2][1]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[2][1]='o';
                }
            }
            break;
        case 'f':
            if(cont%2==0){
                if(arreglo[2][2]=='x'||arreglo[2][2]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[2][2]='x';
                }
            }else{
                if(arreglo[2][2]=='x'||arreglo[2][2]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[2][2]='o';
                }
            }
            break;
        case 'g':
           if(cont%2==0){
                if(arreglo[4][0]=='x'||arreglo[4][0]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[4][0]='x';
                }
           }
           else{
                if(arreglo[4][0]=='x'||arreglo[4][0]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[4][0]='o';
                }
           }
            break;
        case 'h':
            if(cont%2==0){
                if(arreglo[4][1]=='x'||arreglo[4][1]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[4][1]='x';
                }
            }else{
                if(arreglo[4][1]=='x'||arreglo[4][1]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[4][1]='o';
                }
            }  
            break;
        case 'i':
            if(cont%2==0){
                if(arreglo[4][2]=='x'||arreglo[4][2]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[4][2]='x';
                }
            }else{
                if(arreglo[4][2]=='x'||arreglo[4][2]=='o'){
                    jugada(arreglo,cont);
                }else{
                    arreglo[4][2]='o';
                }
            }
            break;
        default :
            cout<<"Ese caracter no esta\n";
            jugada(arreglo,cont);    
    }
}
//muestra el que gano
int winner(char arreglo[5][3]){
    if((arreglo[0][0]=='x'&&arreglo[0][1]=='x'&&arreglo[0][2]=='x')||(arreglo[2][0]=='x'&&arreglo[2][1]=='x'&&arreglo[2][2]=='x')||(arreglo[4][0]=='x'&&arreglo[4][1]=='x'&&arreglo[4][2]=='x')||(arreglo[0][0]=='x'&&arreglo[2][1]=='x'&&arreglo[4][2]=='x')||(arreglo[4][0]=='x'&&arreglo[2][1]=='x'&&arreglo[0][2]=='x')||(arreglo[0][0]=='x'&&arreglo[2][0]=='x'&&arreglo[4][0]=='x')||(arreglo[0][1]=='x'&&arreglo[2][1]=='x'&&arreglo[4][1]=='x')||(arreglo[0][2]=='x'&&arreglo[2][2]=='x'&&arreglo[4][2]=='x')){
        return 1;
    }else if ((arreglo[0][0]=='o'&&arreglo[0][1]=='o'&&arreglo[0][2]=='o')||(arreglo[2][0]=='o'&&arreglo[2][1]=='o'&&arreglo[2][2]=='o')||(arreglo[4][0]=='o'&&arreglo[4][1]=='o'&&arreglo[4][2]=='o')||(arreglo[0][0]=='o'&&arreglo[2][1]=='o'&&arreglo[4][2]=='o')||(arreglo[4][0]=='o'&&arreglo[2][1]=='o'&&arreglo[0][2]=='o')||(arreglo[0][0]=='o'&&arreglo[2][0]=='o'&&arreglo[4][0]=='o')||(arreglo[0][1]=='o'&&arreglo[2][1]=='o'&&arreglo[4][1]=='o')||(arreglo[0][2]=='o'&&arreglo[2][2]=='o'&&arreglo[4][2]=='o'))
    {
        return 2;
    }
    return 0;
}
