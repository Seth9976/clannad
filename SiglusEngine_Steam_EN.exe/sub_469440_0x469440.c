// 函数: sub_469440
// 地址: 0x469440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg3

if (esi s> arg2)
    arg1 = esi
    esi = arg2
    arg2 = arg1

if (esi s< 0)
    return 

int32_t edi_1 = data_7031bc

if (arg2 s>= edi_1)
    return 

void* i_1 = arg2 - esi + 1

if (i_1 s<= 0)
    return 

arg1 = (arg4 + (esi << 1)) * 0x650 + &data_72d8ac
void* i

do
    if (esi s>= 0 && esi s< edi_1)
        *arg1 = arg5
        *(arg1 + 4) = arg5
        *(arg1 + 8) = arg5
        *(arg1 + 0xc) = arg5
        *(arg1 + 0x10) = arg5
        *(arg1 + 0x14) = arg5
        *(arg1 + 0x18) = arg5
        *(arg1 + 0x1c) = arg5
    
    esi += 1
    arg1 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
