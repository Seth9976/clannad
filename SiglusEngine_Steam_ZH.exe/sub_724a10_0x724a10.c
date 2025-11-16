// 函数: sub_724a10
// 地址: 0x724a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0

int32_t i_2 = arg4
int32_t ecx = not.d(arg3)

if (i_2 u>= 8)
    uint32_t i_3 = i_2 u>> 3
    uint32_t i
    
    do
        i_2 -= 8
        int32_t ecx_2 = ecx u>> 8 ^ *(((zx.d(*arg2) ^ zx.d(ecx.b)) << 2) + &data_adc650)
        int32_t ecx_4 = ecx_2 u>> 8 ^ *(((zx.d(arg2[1]) ^ zx.d(ecx_2.b)) << 2) + &data_adc650)
        int32_t ecx_6 = ecx_4 u>> 8 ^ *(((zx.d(arg2[2]) ^ zx.d(ecx_4.b)) << 2) + &data_adc650)
        int32_t ecx_8 = ecx_6 u>> 8 ^ *(((zx.d(arg2[3]) ^ zx.d(ecx_6.b)) << 2) + &data_adc650)
        int32_t ecx_10 = ecx_8 u>> 8 ^ *(((zx.d(arg2[4]) ^ zx.d(ecx_8.b)) << 2) + &data_adc650)
        int32_t ecx_12 = ecx_10 u>> 8 ^ *(((zx.d(arg2[5]) ^ zx.d(ecx_10.b)) << 2) + &data_adc650)
        int32_t ecx_14 = ecx_12 u>> 8 ^ *(((zx.d(arg2[6]) ^ zx.d(ecx_12.b)) << 2) + &data_adc650)
        char eax_22 = arg2[7]
        arg2 = &arg2[8]
        ecx = ecx_14 u>> 8 ^ *(((zx.d(eax_22) ^ zx.d(ecx_14.b)) << 2) + &data_adc650)
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_2 != 0)
    int32_t i_1
    
    do
        char eax_25 = *arg2
        arg2 = &arg2[1]
        ecx = ecx u>> 8 ^ *(((zx.d(eax_25) ^ zx.d(ecx.b)) << 2) + &data_adc650)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return not.d(ecx)
