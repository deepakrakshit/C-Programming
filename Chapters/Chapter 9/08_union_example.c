#include <stdio.h>
#include <string.h>

union Payload {
    int intValue;
    float floatValue;
    char text[20];
};

struct Message {
    int type;          // 1 = int, 2 = float, 3 = text
    union Payload data;
};

int main() {

    struct Message msg;

    // Example 1: Integer message
    msg.type = 1;
    msg.data.intValue = 100;

    if (msg.type == 1) {
        printf("Integer value: %d\n", msg.data.intValue);
    }

    // Example 2: Float message
    msg.type = 2;
    msg.data.floatValue = 3.5;

    if (msg.type == 2) {
        printf("Float value: %.2f\n", msg.data.floatValue);
    }

    // Example 3: Text message
    msg.type = 3;
    strcpy(msg.data.text, "Hello");

    if (msg.type == 3) {
        printf("Text message: %s\n", msg.data.text);
    }

    return 0;
}
