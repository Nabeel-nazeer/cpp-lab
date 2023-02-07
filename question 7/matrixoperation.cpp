#include<iostream>
using namespace std;
class matrix{
    private:
    int rows;
    int columns;
    int result;
    int **m
    public:
    matrix();
    matrix(int r,int c);
    ~matrix();
    void input();
    void display();
    void matrix_add(matrix a,matrix b);
    void matrix_mult();
    void matrix_transpose();
    void matrix_trace();
    void output();
};
matrix::matrix(int r,int c){
    rows=r;
    columns=c;
    m= new int *[rows];
    for(int i=0;i<rows;i++){
        m[i]=new  int [columns];
    }
    
}
void matrix::input(){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            std::cin>>m[i][j];
        }
    }
}
void matrix::display(){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            std::cout<<m[i][j];
        }
        std::cout<<std::endl;
    }
}
void matrix::matrix_add(matrix a,matrix b){
    for(int i=0;i<rows;i)
}
matrix::~matrix(){
    for(int i=o;i<rows;i++){
        delete[] m[i];
    }
    delete[] m;
}
