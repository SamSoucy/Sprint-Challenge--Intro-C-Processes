#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>


/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *dir;
  struct dirent *ent;
  struct stat fileStat;

  // Open directory
  if(argc < 2){
    dir = opendir(".");
  }
  else{
    dir = opendir(argv[1]);
  }
  
  if(dir == NULL){
    printf("Could not open current directory %s\n", argv[1]);
    return 0;
  }

  // Repeatly read and print entries
  while ((ent = readdir(dir))!=NULL){
    stat(ent->d_name, &fileStat);
      printf("%10lld %s\n", fileStat.st_size, ent->d_name);
  }
    
  // Close 
  closedir(dir);

  return 0;
}

