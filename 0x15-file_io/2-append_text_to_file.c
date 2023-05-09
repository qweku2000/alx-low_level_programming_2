#include <stdio.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>
/**
 * append_text_to_file: Append text to the EOF
 * 
 * @filename:File text is appended to
 * @text_content:NULL terminated string to add at the end of the file 
 * return - int 
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int fd, wd;
        int i = 0;
        
        if (!filename)
            return (-1);
        if (!text_content)
            return (-1);
        fd = open(filename,O_WRONLY|O_APPEND);
        if (fd<0)
	  {
            return (-1);
	  }
        while (text_content[i]!='\0')
        {
            i++;
        }

        wd = write(fd,text_content,i);
        if (wd<0)
	  {
            return (-1);
            close (fd);
	  }
        return (1);
        close(fd);    
        

}



