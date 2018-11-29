/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "A3.h"
#include <dirent.h> 
#include <unistd.h>
#include <string.h>

newString *
hostname_1_svc(void *argp, struct svc_req *rqstp)
{
	static newString  result;
	char c[1024];
	// returns the hostname
	if(gethostname(c,sizeof(c))!= -1){
		result.content = c;
	} 
	return &result;
}

newList *
mergesort_1_svc(listValues *argp, struct svc_req *rqstp)
{
	static newList  result;
	int i=0;
	int k=0;
	// merging two lists
	while(i< argp->l1.size){
			result.arr[k] = argp->l1.arr[i];
			i++;
			k++;
	}
	i = 0;
	while(i<argp->l2.size){
		result.arr[k] = argp->l2.arr[i];
			i++;
			k++;
	}
	result.size = k;
	i=0;
	int j = 0;
	int min;
	// sorting the merged list
	for (i = 0; i < k-1; i++) {
		min = i; 
        	for (j = i+1; j < k; j++) {
          		if (result.arr[j] < result.arr[min]) 
            		min = j; 
			}
        int temp = result.arr[min];
		result.arr[min] = result.arr[i];
		result.arr[i] = temp; 
    } 

	return &result;
}

newString *
encryptedecho_1_svc(newString *argp, struct svc_req *rqstp)
{
	static newString  result;
	// Simple encryption mechanism by using key value as 5
	int i=0;
	int size = strlen(argp->content);
	for(i = 0; i<size; i++){
		argp->content[i] = argp->content[i] + 5;
	}
	result.content = argp->content;

	return &result;
}

newString *
listfiles_1_svc(void *argp, struct svc_req *rqstp)
{
	static newString  result;
	struct dirent *d; 
	DIR *dir = opendir(".");
	newString r;
	char c[10000];
	// If the dir exist then it returns the list of files
	if (dir != NULL) { 
		while ((d = readdir(dir)) != NULL) {
				strcat(c, "\n");
				strcat(c, d->d_name); 	
}
            closedir(dir); 
	}else{
		printf("Directory doesn't exist");
	}
	result.content = c;
	return &result;
}

newComplex *
addcomplex_1_svc(complexValues *argp, struct svc_req *rqstp)
{
	static newComplex  result;
	// addition of two complex values, adding the real and imaginary part
	result.real = argp->c1.real + argp->c2.real; 
	result.img = argp->c1.img + argp->c2.img;

	return &result;
}
