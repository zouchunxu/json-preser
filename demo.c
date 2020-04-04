#include <stdio.h>

#define yyc "aa"
#define STATE(name)  yyc##name
int main() {



	printf("%s\n",STATE("ccc"));

    char *p = "111";

    /*!re2c
        re2c:define:YYCTYPE  = "unsigned char";
        re2c:define:YYCURSOR = p;
        re2c:yyfill:enable   = 0;
        re2c:yych:conversion = 1;
        re2c:indent:top      = 1;
        [0-9]+          {printf("%s\n",p);}
        [^]             {printf("%s\n","unknow");}
     */
    return 0;

}