#include <stdlib.h>
#include <stdio.h>
#include <string.h>

bool checkGroup(char str[]){
	int visit[26] = {0,};
	int len = strlen(str);
	for(int i=0; i<len; i++){
		if(visit[str[i]-'a']){
			if(str[i]!=str[i-1]) return false; 
		}
		visit[str[i]-'a']++;
	}
	return true;
}

int main(){
	int N;
	int count = 0; //그룹 단어 개수  
	scanf("%d",&N); 
		
	for(int k=0; k<N; k++){
		char s[100]={"",}; //배열로 선언해야 함  	
		scanf("%s", &s);   
		if(checkGroup(s)) count++;
	}	
	printf("%d",count); 
	return 0;
}