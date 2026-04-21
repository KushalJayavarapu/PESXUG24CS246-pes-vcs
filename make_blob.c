#include "pes.h"
#include <stdio.h>

int main() {
    ObjectID id;
    const char *data = "hello";

    object_write(OBJ_BLOB, data, 5, &id);

    char hex[65];
    hash_to_hex(&id, hex);

    printf("%s\n", hex);
    return 0;
}
