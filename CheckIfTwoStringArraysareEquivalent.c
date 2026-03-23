 int myStrcmp(char *s1 , char *s2){
    while(*s1 && *s2 && *s1==*s2){
        ++s1;
        ++s2;
    }
    return *s1 - *s2;
}
 bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char str1[10001] = "";
    char str2[10001] = "";
    for(int i = 0 ; i < word1Size; i++){
        strcat(str1,word1[i]);
    }
        for(int i = 0 ; i < word2Size; i++){
        strcat(str2,word2[i]);
    }
    if(myStrcmp(str1,str2) == 0){
        return true;
    }else{
        return false;
    }
}