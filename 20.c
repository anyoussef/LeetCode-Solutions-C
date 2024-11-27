bool isValid(char* s){
    
    int n = 0;
    char stack[10000];

    while (*s != '\0'){
        switch(*s){
            case '(':
            case '[':
            case '{':
                stack[n++] = *s;
                break;
            case ')':
                if (n == 0 || stack[--n] != '(') return false;
                break;
            case ']':
                if (n == 0 || stack[--n] != '[') return false;
                break;
            case '}':
                if (n == 0 || stack[--n] != '{') return false;
                break;
            default:
                return false;
        }
        s++;
    }
    return n == 0;
}
