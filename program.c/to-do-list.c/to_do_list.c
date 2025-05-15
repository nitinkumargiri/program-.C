#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASK_LEN 100
#define FILE_NAME "todo.txt"

void addTask() {
    char task[MAX_TASK_LEN];
    printf("Enter the task: ");
    getchar(); // Clear newline from buffer
    fgets(task, MAX_TASK_LEN, stdin);
    
    // Remove trailing newline
    size_t len = strlen(task);
    if (len > 0 && task[len - 1] == '\n') {
        task[len - 1] = '\0';
    }

    FILE *file = fopen(FILE_NAME, "a");
    if (file == NULL) {
        perror("Could not open file");
        return;
    }

    fprintf(file, "- %s\n", task);
    fclose(file);
    printf("Task added.\n");
}

void viewTasks() {
    char line[MAX_TASK_LEN];
    FILE *file = fopen(FILE_NAME, "r");

    if (file == NULL) {
        printf("No tasks found.\n");
        return;
    }

    printf("\n--- To-Do List ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    printf("------------------\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nTo-Do List Menu:\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}