

#include <iostream>
#include <fcntl.h>
#include <unistd.h>
using namespace std;

int main(int argc, char* argv[])
{
    
    if (argc != 2) 
    {
        cout << "argument error\n";

        return 1;
    }    
    
    int fd = open(argv[1], O_RDONLY);

    if (fd == -1) 
    {
        cout << "Cannot open the file\n";

        return 1;
    }

    int readNB = 0;

    char buff[100];  

    while ((readNB = read(fd, buff, sizeof(buff))) > 0) {
     
        cout << buff;
    }


    if (readNB == -1) 
    {
        cout << "Cannot read the file\n";
       
        return 1;
    }

    close(fd);

    return 0;
}
