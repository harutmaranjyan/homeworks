#include <iostream>
#include <unistd.h>
#include <fcntl.h>    
#include <sys/stat.h>

int main(int argc , char* argv[]){
    if(argc!=3){
        std::cerr<<"argument error"<<std::endl;
        return 1;
    }

int fd1 = open (argv[1],O_RDONLY,0644); 

struct stat filestat;
stat(argv[1],&filestat);


char buff[filestat.st_size+1];

int bytesread = read(fd1,buff ,filestat.st_size );

buff[filestat.st_size]='\0';

std::cout<<buff<<std::endl;


int fd2 = open (argv[2],O_WRONLY |O_CREAT| O_TRUNC,0644); 

int count=0;
int i=0;
while(i < filestat.st_size ){

if(buff[i]==' ')
++count;

++i;

}

write(fd2,buff,filestat.st_size);

std::cout<<"Successfully copied "<<i<< " bytes (data: "<< i-count <<" hole: "<<count<<")"<<std::endl;

}