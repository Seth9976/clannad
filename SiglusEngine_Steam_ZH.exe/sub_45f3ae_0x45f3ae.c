// 函数: sub_45f3ae
// 地址: 0x45f3ae
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t i_1 = arg2
int32_t eax_2 = sub_745f3f(i_1 * 0x2c)
int32_t eax_3

if (eax_2 == 0)
    eax_3 = 0
else
    sub_61cdd0(eax_2, 0x2c, i_1, sub_45f299)
    eax_3 = eax_2

*arg1 = eax_3

if (eax_3 == 0)
    return 0x8007000e

if (i_1 u> 0)
    int32_t edx_1 = 0
    int32_t i
    
    do
        int32_t* eax_5 = *arg1 + edx_1
        eax_5[3].b &= 0xf0
        *eax_5 = 0xffffffff
        eax_5[1] = 0xffffffff
        eax_5[2] = 0xffffffff
        edx_1 += 0x2c
        i = i_1
        i_1 -= 1
    while (i != 1)

return 0
