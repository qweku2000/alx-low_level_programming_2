#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>
/**
 * create_file - Create a file object
 * 
 * @filename: The file to be created
 * @text_content:string to be written into file
 * @return -  int 
 */

int create_file(const char *filename, char *text_content)
{
         int fd, wd;

	 int i = 0;
       
        if (!filename)
                return (-1);       

        if (!text_content)  
                return (-1);  

        if (text_content!=NULL)
                while (text_content[i]!='\0')
                           i++;
        
        fd = open(filename,O_CREAT|O_RDWR|O_TRUNC,0600);
        if (fd<0)
                return (-1);

        wd = write(fd,text_content,i);  
        if (wd!=i)
	  {
              close(fd);
              return(-1);
	  }
        close(fd);   
        return (1);
}
