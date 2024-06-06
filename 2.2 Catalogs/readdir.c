#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main() {
    DIR *dir; // initialize pointer to directory structure
    struct dirent *entry; //initialize structure for directory

    dir = opendir("/"); // open directory at "/"
    if (!dir) {
        perror("diropen");
        exit(1);
    };

    while ( (entry = readdir(dir)) != NULL) {
        printf("%d - %s [%d] %d\n",
            entry->d_ino, entry->d_name, entry->d_type, entry->d_reclen);
// d_ino;       /* inode number
// d_name[256]; /* filename */
// d_type;      /* type of file; not supported by all file system types */
// d_reclen;    /* length of this record */
  };

    closedir(dir); // free resources

    return 0;
};
