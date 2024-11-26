int strStr(char* haystack, char* needle){
    
    int n = strlen(haystack);
    int m = strlen(needle);

    if (m > n){
        return -1;
    }
   
    for (int i = 0; i <= n - m; i++){
        if (strncmp(&haystack[i], needle, m) == 0){
            return i;
        }
    }
    return -1;
   
}

