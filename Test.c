#include<stdio.h>
#include <stdlib.h>
#include <string.h>


//マクロの定義　値
#define SIZE_OF_MathARRAY(Matharray) (sizeof(Matharray)/sizeof(Matharray[0]))
#define SIZE_OF_PhysicsARRAY(Physicsarray) (sizeof(Physicsarray)/sizeof(Physicsarray[0]))


void calculationofSubject(const int* array, int size, char *str)
{
    int i , max = array[0];
    for(i=1; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("%sの最大点:%d点\n",str,max);

    int j , min = array[0];
    for(j=1; j < size; j++){
        if(array[j] < min){
            min = array[j];
        }
    }
    printf("%sの最小点:%d点\n",str,min);

    int k, sum = array[0];
    for (k= 1; k<size; k++){
        sum += array[k];
    }
    int avg = sum/size;
    printf("%sの平均点:%d点\n",str,avg);


}


void calculationofStudentscore(int size1, int size2, int Studentscore[size1][size2]){
    
    int l;
    int totalscore[5];
    for(l = 0; l < 5; l++){
        totalscore[l] = Studentscore[l][0] +  Studentscore[l][1];
    }

    int i , max = totalscore[0];
        for(i=1; i < 5; i++){
            if(totalscore[i] > max){
                max = totalscore[i];
            }
        }
     printf("数学と物理の合計が最も高い点数は:%d点\n",max);
}

int main(void)
{
    char nameofMath[10] = "数学";
    char nameofPhysics[10] = "物理";

    int Matharray[5] = {72,88,72,81,68};
    int Physicsarray[5] = {48,39,91,82,78};
    int Studentscore[5][2] = {
            {72,48},
            {88,39},
            {72,91},
            {81,82},
            {68,78}
        };



    calculationofSubject(Matharray, SIZE_OF_MathARRAY(Matharray),nameofMath);
    calculationofSubject(Physicsarray, SIZE_OF_PhysicsARRAY(Physicsarray),nameofPhysics);
    calculationofStudentscore(5,2,Studentscore);


    return 0;
}