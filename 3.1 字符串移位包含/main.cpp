//
//  contains.cpp
//  Awesome Algorithms
//
//  Created by 刘宇轩 on 2019/5/24.
//  Copyright © 2019 yuxuanliu. All rights reserved.
//

#include <stdio.h>
#include <string>

char src[] = "AABBCD";
char des[] = "CDAA";

bool primitiveRotateContains(char* src, char* des){
    int len = (int)strlen(src);
    for(int i = 0; i < len; i ++){
        char temp = src[0];
        for(int j = 0;j < len - 1; j ++){
            src[j] = src[j + 1];
        }
        src[len - 1] = temp;
        if( strstr(src, des) != NULL ){
            return true;
        }
    }
    return false;
}


bool rotateContains(char* src, char* des){
    
    size_t len = strlen(src);
    char* newSrc = new char[(int)(len * 2)];
    strcat(newSrc, src);
    strcat(newSrc, src);
    return strstr(newSrc, des) != NULL;
    
}

int main(){
    
    bool result =  rotateContains(src, des);
    if(result){
        printf(" Contain 🐮🍺🍻 \n");
    }else {
        printf(" Not Contain FW🗑🚮 \n");
    }
    
    return 0;
}
