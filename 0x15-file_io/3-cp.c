#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define NAME_OF_THE_FILE "file_from","file_to"

/**
 * copy - Copies content from one file to another 
 * 
 * @file_from:File to be cobied
 * @file_to:File 
 * return - int 
 */

int copy(char *file_from,char *file_to)
{
        int fd,wd,rd,ft;
        char buffer[1024];

        
        
        fd = open(file_from,O_RDONLY);

        
        rd = read(fd, buffer, sizeof(buffer));
        if (rd<0||!file_from)
        {
            char *errmssg = "Error: Can't read from file %s \n";
            printf(errmssg,file_from);
            close(fd);
            return (98);
        }
        if (file_to)
        {
            ft = open(file_to,O_TRUNC|O_WRONLY);
        }
        else if (!file_to)
        {
            ft = open(file_to,O_CREAT|O_RDWR,0664);
        }
    

        wd = write(ft,buffer,sizeof(buffer));
        if (wd<0)
        {
            char* errmssg = "Error: Can't write to %s";
            printf(errmssg,file_to);
            close (ft);
            return (99);
        }
        close(ft);
        return (0);

}


int main(int argc,char *argv[])
{
        if(argc<3)
        {
            char *errmssg = "Usage: cp file_from file_to";
            write(2,errmssg,strlen(errmssg));
            return (97);
        }
        else
        {
            copy(argv[1],argv[2]);
            return (0);
        }

}















