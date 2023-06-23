#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char* timeStr) {
    char* token;
    char* delimiter = ":";
    unsigned long totalSeconds = 0;

    // Copy the string because strtok modifies the original string
    char* timeCopy = strdup(timeStr);

    // Extract hours, minutes, and seconds using strtok
    token = strtok(timeCopy, delimiter);
    unsigned long hours = strtoul(token, NULL, 10);

    token = strtok(NULL, delimiter);
    unsigned long minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, delimiter);
    unsigned long seconds = strtoul(token, NULL, 10);

    // Calculate total seconds
    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    free(timeCopy);  // free the dynamically allocated memory

    return totalSeconds;
}

int main() {
    const char* timeStr1 = "10:12:50";
    unsigned long totalSeconds1 = computeTotalSeconds(timeStr1);
    printf("Input String: %s\n", timeStr1);
    printf("Total Seconds: %lu\n", totalSeconds1);

    const char* timeStr2 = "13:10:40";
    unsigned long totalSeconds2 = computeTotalSeconds(timeStr2);
    printf("Input String: %s\n", timeStr2);
    printf("Total Seconds: %lu\n", totalSeconds2);

    return 0;
}