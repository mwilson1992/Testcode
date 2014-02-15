#include <windows.h> 

DWORD WINAPI threadFunc(LPVOID); 

int main(){ 
	HANDLE hThread = NULL; 
	DWORD threadID = NULL;

	hThread = CreateThread(NULL, 0, threadFunc(hThread), 0, 0, &threadID); 

	if(hThread == NULL){ 
	printf("Error creating thread...\n"); 
	return -1; 
	} 

	printf("Thread running...\n"); 
	CloseHandle(hThread); 
	return 0; 
} 
DWORD WINAPI threadFunc(LPVOID p){ 
	printf("Inside thread...\n"); 
	return 0; 
} 
