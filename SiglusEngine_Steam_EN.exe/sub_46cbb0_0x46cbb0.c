// 函数: sub_46cbb0
// 地址: 0x46cbb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0)
    return 

int32_t edi_1 = data_7031bc

if (arg2 s>= edi_1)
    return 

void* i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

int32_t eax_1 = arg4 + (arg3 << 1)
void* esi_2 = eax_1 * 0x7a0 + &data_98c1f8
arg1 = eax_1 * 0x650 + 0x72d7cc
void* i

do
    if (arg3 s>= 0 && arg3 s< edi_1)
        *esi_2 += 1
        arg1[-1] = arg5
        *arg1 = arg6
        arg1[1] = arg7
    
    arg3 += 1
    arg1 = &arg1[0x328]
    esi_2 += 0xf40
    i = i_1
    i_1 -= 1
while (i != 1)
