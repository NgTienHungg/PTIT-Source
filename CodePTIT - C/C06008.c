#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[101] = {};
    gets(s);
    char res[101][101] = {}; // Mảng 2 chiều lưu trữ các từ, mỗi dòng là 1 từ
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        bool check = true;
        // Kiểm tra xem token đã xuất hiện trong res chưa
        for (int i = 0; i < n; i++)
        {
            if (strcmp(token, res[i]) == 0)
            {
                check = false;
                break;
            }
        }
        // Nếu token chưa xuất hiện trong res
        if (check == true)
        {
            strcpy(res[n], token);
            n++;
        }
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
        printf("%s ", res[i]);
    return 0;
}