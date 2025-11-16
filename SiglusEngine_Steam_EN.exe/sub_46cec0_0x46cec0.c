// 函数: sub_46cec0
// 地址: 0x46cec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
int32_t esi = arg3

if (esi s> edi)
    arg1 = esi
    esi = edi
    edi = arg1

if (esi s< 0)
    return 

int32_t edx = data_7031bc

if (edi s>= edx)
    return 

int32_t i_1 = edi - esi + 1

if (i_1 s<= 0)
    return 

arg1 = arg4 + (esi << 1)
int32_t* ebx_2 = arg1 * 0x650 + 0x72d784
void* ecx_1 = arg1 * 0x7a0 + &data_98c1f8
void* var_8_1 = ecx_1
int32_t i

do
    if (esi s>= 0 && esi s< edx && ebx_2[-0x32] == 5)
        int32_t eax_1
        eax_1.b = arg4 != 0
        sub_4b8e80(eax_1, ebx_2, ecx_1 - 0x26c, data_131310c, eax_1)
        ecx_1 = var_8_1
        edx = data_7031bc
        *ecx_1 += 1
    
    ecx_1 += 0xf40
    esi += 1
    ebx_2 = &ebx_2[0x328]
    var_8_1 = ecx_1
    i = i_1
    i_1 -= 1
while (i != 1)
