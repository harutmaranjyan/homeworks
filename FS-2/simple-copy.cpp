#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

    int main(int argc, char* argv[]) 
    {
    if (argc != 3) 
    {
        cout << "argument error\n";

        return 1;
    }    

    int fd1 = open( argv[1], O_RDONLY);

    if (fd1 == -1) 
    {

    cout << "Cannot open the source file\n";

    return 1;

    }

    int fd2 = open(argv[2],O_WRONLY | O_TRUNC | O_CREAT,0777);   
         
    if (fd2 == -1) 
    {
    
    cout << "Cannot open the destination file\n";
    
    return 1;

    }

    char buf[100];

    int readNB,writeNB;

    while ((readNB = read(fd1, buf, sizeof(buf))) > 0) 
    {
     
      writeNB = write(fd2, buf, readNB);  

    }

        if( readNB == -1 )
        {
        
        cout << "Read error : source file\n";
        
        return 1;

        }


        if( writeNB == -1 ){
        
        cout << "Write error : destination file\n";
        
        return 1;

        }

    close(fd1);

    close(fd2);

    return(0);

}

