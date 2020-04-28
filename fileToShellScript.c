//running shell-script commands from file

	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <string.h>
	#include <fcntl.h>
	#include <sys/wait.h>
	
	int readLine(int fd, char *line, int n) //function to read file
	{
		int i=0;
		int sz=(read(fd,line,n));   //reading file
		if(line[sz-1]=='\n')      //removing trailing new line
		line[sz-1]='\0';         //adding end of file
		else
		line[sz]='\0';       //adding end of file
		for(i;i<sz;i++)			//replace new line with ;
		{
			if(line[i]=='\n')
			line[i]=';';
		}
		return sz;       //return processed string
	}
	
	int main(int argc, char* argv[]){
	  pid_t pid;
	  int fd;
	  int status;
	  char *comm=malloc(10*sizeof(char));
	  char *c1[100] ; 
	  char *commands;
	  char *commands1;
	  int i=0,j=0;
	  char * temp[100];	  
	  int statu;
	  const char q[2] = ";";
	  char *c = (char *) calloc(200, sizeof(char));
	  
	  for(i;i<50;i++)
	  {
	  	c1[i]=malloc(10*sizeof(char));	
	  }
	  i=0;
	  
	  if(argc !=2 ){   //if filename is absent
		  printf("Call model: %s <inputFile>\n", argv[0]);
		  exit(0);
	  }
	  if ( (fd = open(argv[1], O_RDONLY)) == -1)   		//open a file to read
	  {
	    printf("%s could not be opened, please create file first\n", argv[1]);
	    exit(0);
	  }
	status=readLine(fd,c,200);     //call to readine function 
	if(status==0)    //if file is empty
	{
		
		printf("The file is empty");
		exit(0);
		   }  	
	else if(status==-1) 			//if there is issue in reading a file
	{
					printf("File read error");
					exit(0);
		   }
	commands=strtok(c,";");				//dividing string using delimiter
	while( commands != NULL ) {
			temp[i]= malloc( strlen(commands)* sizeof(char));
	      	temp[i]=commands;
			i++;	    
			commands = strtok(NULL, ";");    
	}  
	temp[i]="EnD";
	i=0;
	while(temp[i]!="EnD")
	 {
		commands1=strtok(temp[i]," ");
	      while(commands1 != NULL)
	      {
	      	if(j==0)
	      	{
			  comm=commands1;
			}
			  
	      	c1[j]=commands1;
	      	
			  j++;
	      
	   		commands1 = strtok(NULL, " ");    
	   		}
	   		 c1[j]=NULL; 
		
		pid=fork();
		if(pid < 0)				//error creating child
	    {
	                printf("Error creating Child");
	            
		}
		else if(pid==0)			//child process   
	    {        
		execvp(comm,c1);			//running shell script commands using execvp
		exit(0);
		}
	    else			//parent process
	            {	
	            wait(NULL);
	     
			}	
		
		
		i++;
		j=0;
	}	
	
	
	
	
}	
	
	
	
	
	

