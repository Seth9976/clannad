// 函数: sub_542980
// 地址: 0x542980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0xffffffff)
    if (arg1 u<= 0x3f)
        (&data_f8c790)[arg1 * 0xe48] = 0xffffffff
        *(arg1 * 0x2d0 + 0x8fcb04) = 0xffffffff
        *(arg1 * 0x2d0 + &data_8fcb08) = 0xffffffff
    
    return 

int32_t* eax_1 = &data_f8c790
int32_t i_2 = 0x40
int32_t i

do
    *eax_1 = 0xffffffff
    eax_1 = &eax_1[0xe48]
    i = i_2
    i_2 -= 1
while (i != 1)
void* eax_2 = &data_8fcb08
int32_t i_3 = 0x40
int32_t i_1

do
    *(eax_2 - 4) = 0xffffffff
    eax_2 += 0x2d0
    *(eax_2 - 0x2d0) = 0xffffffff
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
