#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc,int* argv[]){
    if(argc!=2){
        fpgrint(2,"error,please input correct time");
        exit(1);
    }
    sleep(atoi(argvp[1]));
    exit(0);


}