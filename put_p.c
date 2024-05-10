#include "ft_printf.h"

void put_p(void *ptr,int *len)
{
    unsigned long long address = (unsigned long long)ptr;  // ポインタを整数にキャスト
    char hex[20];  // 十分な長さの配列を確保
    int i = 0;

    // 最低限0のアドレスでも1桁は出力されるようにする
    if (address == 0) {
        hex[i++] = '0';
    }

    // アドレスが0ではない場合の変換プロセス
    while (address != 0) {
        int remainder = address % 16;
        hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        address /= 16;
    }

    hex[i] = '\0';  // null文字で終端

    // 文字列を逆順に出力
    while (i-- > 0) {
        ft_tolower(hex[i]);
        ft_putchar_fd(hex[i], 1);
        len++;
    }
}