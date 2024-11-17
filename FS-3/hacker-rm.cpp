#include <iostream>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {


const char *filepath = argv[1];
struct stat filestat;

    if (stat(filepath, &filestat)==-1)
    cerr<<"Error wrong path or file does not exist"<<endl;

int fd = open(argv[1] ,O_WRONLY,0777);


char buf[filestat.st_size]={'\0'};

write(fd,buf,filestat.st_size);

    if (unlink(filepath) == -1) {
        cerr << "Cannot remove the file" << endl;
       return 1;
    }







return 0;

}
