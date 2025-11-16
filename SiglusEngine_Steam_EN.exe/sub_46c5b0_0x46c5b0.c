// 函数: sub_46c5b0
// 地址: 0x46c5b0
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
int32_t* esi_2 = eax_1 * 0x650 + 0x72d784
arg1 = eax_1 * 0x7a0 + &data_98c1f8
void* i

do
    if (arg3 s>= 0 && arg3 s< edi_1)
        *arg1 += 1
        *esi_2 = arg5
    
    arg3 += 1
    arg1 += 0xf40
    esi_2 = &esi_2[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
