#include <stdio.h>
#include <string.h>

int main()
{
    char resume[2000];

    char skills[][30] = {
        "C",
        "Python",
        "Java",
        "SQL",
        "Data Structures",
        "Communication",
        "Problem Solving",
        "Git"
    };

    int totalSkills = 8;
    int matched = 0;

    printf("Paste your resume:\n");
    fgets(resume, sizeof(resume), stdin);

    printf("\n===== ATS REPORT =====\n");

    printf("\nMatched Skills:\n");

    for(int i = 0; i < totalSkills; i++)
    {
        if(strstr(resume, skills[i]) != NULL)
        {
            printf("[+] %s\n", skills[i]);
            matched++;
        }
    }

    printf("\nMissing Skills:\n");

    for(int i = 0; i < totalSkills; i++)
    {
        if(strstr(resume, skills[i]) == NULL)
        {
            printf("[-] %s\n", skills[i]);
        }
    }

    float score = ((float)matched / totalSkills) * 100;

    printf("\nATS Match Score = %.2f%%\n", score);

    if(score >= 80)
    {
        printf("\nStatus : Strong Candidate\n");
    }
    else if(score >= 50)
    {
        printf("\nStatus : Intermediate Candidate\n");
    }
    else
    {
        printf("\nStatus : Beginner Candidate\n");
    }

    printf("\n===== IMPROVEMENT SUGGESTIONS =====\n");

    if(strstr(resume, "C") == NULL)
        printf("- Learn C Programming\n");

    if(strstr(resume, "Python") == NULL)
        printf("- Learn Python Programming\n");

    if(strstr(resume, "Java") == NULL)
        printf("- Learn Java Programming\n");

    if(strstr(resume, "SQL") == NULL)
        printf("- Learn Database Management and SQL\n");

    if(strstr(resume, "Data Structures") == NULL)
        printf("- Practice Data Structures and Algorithms\n");

    if(strstr(resume, "Communication") == NULL)
        printf("- Improve Communication Skills\n");

    if(strstr(resume, "Problem Solving") == NULL)
        printf("- Solve Coding Problems Daily\n");

    if(strstr(resume, "Git") == NULL)
        printf("- Learn Git and GitHub\n");

    printf("\n=======================\n");

    return 0;
}