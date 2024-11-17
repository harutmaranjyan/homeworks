#include <iostream>
#include <unistd.h>
#include <fcntl.h>    
#include <sys/stat.h>

int main(int argc, char* argv[]){

if(argc != 2)
std::cerr << "Argument error";

int fd = open (argv[1],O_WRONLY,0644 );
if(fd==-1){
std::cerr<<"cannot open fd"<<std::endl;
return 1;
}


if(dup2(fd,1)==-1){
std::cerr<<"cannot dup fd"<<std::endl;
return 1;

}

int fd1 = open("first line",O_RDONLY,0644);
if(fd1==-1){
    std::cerr<<"cannot open fd1"<<std::endl;
    return 1;
}
if(dup2(fd1,0)==-1){
    std::cerr<<"cannot dup fd1"<<std::endl;
    return -1;
}

struct stat filestat;
if(stat("first line",&filestat)==-1){

std::cerr<<"cannot open file1"<<std::endl;
return 1;


}
char a[filestat.st_size+1];
int bytesread1 = read(fd1 , a , filestat.st_size);

if(bytesread1==-1)
{

    std::cerr<<"cannot read file1"<<std::endl;
return 1;

}

a[filestat.st_size] = '\0';
std::cout<<a<<std::endl;


close(fd1);

/////
int fd2 = open("second line",O_RDONLY,0644);
if(fd2==-1){
    std::cerr<<"cannot open fd1"<<std::endl;
    return 1;
}
if(dup2(fd2,0)==-1){
    std::cerr<<"cannot dup fd1"<<std::endl;
    return -1;
}


if(stat("second line",&filestat)==-1){

std::cerr<<"cannot open file2"<<std::endl;
return 1;


}

int bytesread2 = read(fd2 , a , filestat.st_size);

if(bytesread2==-1)
{

    std::cerr<<"cannot read file1"<<std::endl;
return 1;

}

a[filestat.st_size] = '\0';
std::cout<<a<<std::endl;

close(fd2);
close(fd);

} 
