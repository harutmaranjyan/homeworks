#include <iostream>
#include <unistd.h>
#include <string>
#include <fcntl.h>

void initialize(int argc, char** argv)
{
     if (argc != 2)
     std::cerr << "Argument error" ;

int fd = open(argv[1],O_RDONLY);
    if(fd == -1)
       std::cerr<< "Cannot open the file " ;


    if (dup2(fd , 0) == -1) 
        std::cerr << "Failed to redirect stdin" << std::endl;
      
    close(fd);

}
 




int main(int argc, char** argv)
{
// initialize the program based on the requirements
  initialize(argc, argv);
 
// read the string 
  std::string input;
  std::cin >> input;


  // logic to get the reversed string
  std::string reversed;

  // put your reversing logic here
  int i=size(input);
  while ( i+1!=0 ) {
 reversed  = reversed + input[i]; 

--i;

  }
 
  // print to the console
  std::cout << reversed<<std::endl;
 close(0);
  return 0;
}

