#include <stdio.h>
#include "json.h"

int main() {
    dream_json * d = dream_decode("{\"a\":2}");


    printf("%s\n", dream_encode(d));
//    printf("%s : %f \n", d->obj->key,d->obj->val->number);
    return 0;
}

