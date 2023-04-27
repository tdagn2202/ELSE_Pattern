int Compare(char s1[], char s2[]){
    int i,j,d=0;
    while (s1[i]!='\0' && s2[j]!='\0' && !d){
        d = s1[i] - s2[j];
        i++;
        j++;
    }
    return d;
}
