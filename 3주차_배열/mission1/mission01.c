#include    <stdio.h>
#include    <cs50.h>

string calGrade(int);

int main(void){
    int score = 0;
    printf("학점 프로그램\n");
    printf("종료를 원하면 \"999\"를 입력\n");
    printf("학점 테이블\n");
    printf("점수 : 95       90      85      80      75      70      65      60      0\n");
    printf("학점 : A+       A       B+      B       C+      C       D+      D       F\n");
    
    while(score!=999){
        score = get_int("성적을 입력하세요 (0 ~ 100) : ");
        if(score == 999){
            printf("학점 프로그램을 종료합니다.\n");
            return 0;
        }
        else if(score>100 || score < 0){
            printf("** %i 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", score);
        }
        else{
            printf("당신의 학점은 %s입니다.\n", calGrade(score));
        }
    }
}

string calGrade(int score){
    if(score>=95){
        return "A+";
    }
    else if(score>=90){
        return "A";  
    }
    else if(score>=85){
        return "B+";
    }
    else if(score>=80){
        return "B";
    }
    else if(score>=75){
        return "C+";    
    }
    else if(score>=70){
        return "C";    
    }
    else if(score>=65){
        return "D+";    
    }
    else if(score>=60){
        return "D";    
    }
    else {
        return "F";    
    }
    
}