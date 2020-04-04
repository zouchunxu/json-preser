//
// Created by 邹春旭 on 2017/10/3.
//

#ifndef TEST_JSON_H
#define TEST_JSON_H

#include "JsonHeap.h"
#include <string.h>
#include <stdio.h>

char *convert_to_unicode(char *s);

typedef struct __json dream_json;


typedef struct {
    char *key;
    dream_json *val;
} dream_obj;

typedef enum {
    JSON_NUMBER = 0,
    JSON_STR = 1,
    JSON_ARRAY = 2,
    JSON_OBJECT = 3
} dream_type;

struct __json {
    union {
        double number;
        char *string;
        dream_json *arr;
        dream_obj *obj;
    };
    dream_type type;
};

char *dream_parse_str(char *);

dream_json *dream_parse(char *srcJson);

char *myTrim(char *val) {
    while (*val == '\n' || *val == '\t' || *val == ' ' || *val == '\r') {
        *val++;
    }
    return val;
}

dream_json *dream_decode(char *srcJson) {
    return dream_parse(srcJson);
}


char *dream_encode(dream_json *json) {

    int stackLen = 0;
    stackLen = sizeof("{") - 1;
    memcpy(dream_push(stackLen), "{", stackLen);
    char tmpConvert[255];
    switch (json->type) {
        case JSON_NUMBER:
            sprintf(tmpConvert, "%f", json->number);
            stackLen += strlen(tmpConvert);
            memcpy(dream_push(strlen(tmpConvert)), tmpConvert, strlen(tmpConvert));
            break;
        case JSON_STR:
            memcpy(tmpConvert, convert_to_unicode(json->string), strlen(convert_to_unicode(json->string)));
            stackLen += strlen(tmpConvert);
            memcpy(dream_push(strlen(tmpConvert)), tmpConvert, strlen(tmpConvert));
            break;
        default:
            break;
    }

    stackLen += sizeof("{") - 1;
    memcpy(dream_push(sizeof("{") - 1), "}", (sizeof("{") - 1));

    return dream_pop(stackLen);

}


dream_json *dream_parse(char *srcJson) {

    char *trimJson = myTrim(srcJson);
    dream_json *s = malloc(sizeof(dream_json));
    char *c;
    int tmpObjLen = 0;
    int isArray = 0;
    int isObject = 0;


    switch (*trimJson) {
        case '"':
            s->string = dream_parse_str(trimJson);
            s->type = JSON_STR;

            break;
        case '[':
            printf("%s\n", trimJson);
            s->type = JSON_ARRAY;
            trimJson++;

            while (*trimJson != ']' && *trimJson != '\0') {
                int tmpLen = 0;
                while (*trimJson != ',' && *trimJson != ']' && *trimJson != '\0') {
                    memcpy(dream_push(1), trimJson++, 1);
                    tmpLen++;
                }
                memcpy(dream_push(1), "\0", 1);
                char *c = dream_pop(tmpLen + 1);
                dream_json *tmp = dream_parse(c);
                char * s = dream_push(sizeof(dream_json));

                memcpy(s, tmp, sizeof(dream_json));
                printf("%s\n",trimJson);

                trimJson++;

            }
            s->arr = dream_pop(sizeof(dream_json) * 2);
            break;
        case '{':
            s->type = JSON_OBJECT;
            trimJson++;

            while (*trimJson != '}' && *trimJson != '\0') {
                int tmpLen = 0;
                isArray = isObject = 0;
                dream_obj *tmpObj = malloc(sizeof(dream_obj));
                while (*trimJson != ':' && *trimJson != '}' && *trimJson != '\0') {
                    memcpy(dream_push(1), trimJson++, 1);
                    tmpLen++;
                }
                trimJson++;

                memcpy(dream_push(1), "\0", 1);
                char *keySrc = dream_pop(tmpLen + 1);

                tmpObj->key = dream_parse_str(keySrc);


                tmpLen = 0;
                if (*trimJson == '[') {
                    isArray = 1;
                } else if (*trimJson == '{') {
                    isObject = 1;
                }
                if (isArray == 1) {
                    while (*trimJson != ']') {
                        memcpy(dream_push(1), trimJson++, 1);
                        tmpLen++;
                    }
                    memcpy(dream_push(1), trimJson++, 1);
                    tmpLen++;
                } else if (isObject == 1) {
                    while (*trimJson != '}') {
                        memcpy(dream_push(1), trimJson++, 1);
                        tmpLen++;
                    }
                } else {
                    while (*trimJson != ',' && *trimJson != '}' && *trimJson != '\0') {
                        memcpy(dream_push(1), trimJson++, 1);
                        tmpLen++;
                    }
                }


                memcpy(dream_push(1), "\0", 1);
                char *valSrc = dream_pop(tmpLen + 1);

                char * newSrc = malloc(strlen(valSrc)+1);
                memcpy(newSrc,valSrc,strlen(valSrc)+1);


                tmpObj->val = dream_parse(newSrc);

                memcpy(dream_push(sizeof(dream_obj)), tmpObj, sizeof(dream_obj));
                tmpObjLen += sizeof(dream_json);

                trimJson++;
            }
            s->obj = malloc(tmpObjLen);
            memcpy(s->obj, dream_pop(tmpObjLen), tmpObjLen);


            break;
        default:
            s->number = strtof(trimJson, &c);
            s->type = JSON_NUMBER;
            break;
    }
    return s;
}

char *convert_to_utf8(char *src) {
    char *str;
    long i = strtol(src, &str, 16);

    char *desc = malloc(sizeof(char) * 255);
    int len = 0;
    if (i < 0x7f) {
        desc[len++] = (char) i;
    } else if (i < 0x0800) {
        desc[len++] = (char) (i >> 6 & 0x1F | 0xC0);
        desc[len++] = (char) (i >> 0 & 0x3F | 0x80);
    } else if (i < 0x010000) {
        desc[len++] = (char) (i >> 12 & 0x0f | 0xe0);
        desc[len++] = (char) (i >> 6 & 0x3f | 0x80);
        desc[len++] = (char) (i >> 0 & 0x3f | 0x80);
    } else if (i < 0x110000) {
        desc[len++] = (char) (i >> 18 & 0x07 | 0xF0);
        desc[len++] = (char) (i >> 12 & 0x3F | 0x80);
        desc[len++] = (char) (i >> 6 & 0x3F | 0x80);
        desc[len++] = (char) (i >> 0 & 0x3F | 0x80);
    }

    desc[len] = '\0';
    return desc;
}


char *convert_to_unicode(char *s) {
    int len = strlen(s);
    static const char hex_digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    size_t i, size;
    char *head, *p;
    p = head = dream_push(size = len * 6 + 2);
    *p++ = '"';

    for (int i = 0; i < len; ++i) {
        unsigned char ch = (unsigned char) s[i];

        if (ch < 0x20) {
            printf("ch:%d\n", ch);
            char buffer[7];
            sprintf(buffer, "\\u%04X", ch);
            printf("buffer:%s\n", buffer);
        } else
            *p++ = s[i];
    }


    *p++ = '"';
    printf("ss:%s\n", p);
    exit(1);
    return dream_pop(size);
}


char *dream_parse_str(char *src) {
    src++;
    char desc[32];
    int utflen = 0;
    while (*src != '"' && *src != '\0') {

        int len = 0;
        if (*src == '\\' && *(src + 1) == 'u') {
            src += 2;

            while (*src != '\0' && *src != '\\') {
                desc[len++] = *src++;
            }
            desc[len] = '\0';

            char *utf8 = convert_to_utf8(desc);
            char *desc1 = dream_push(strlen(utf8));
            memcpy(desc1, utf8, strlen(utf8));
            utflen += strlen(utf8);
            free(utf8);
        } else {
            memcpy(dream_push(1), src++, 1);
            utflen += 1;
        }


    }
    memcpy(dream_push(1), "\0", 1);
    char *s = dream_pop(utflen + 1);
    char *res = malloc(utflen + 1);
    memcpy(res, s, utflen + 1);
    return res;
}


#endif //TEST_JSON_H
