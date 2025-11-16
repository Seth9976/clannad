// 函数: sub_52e0b0
// 地址: 0x52e0b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2

if (arg3 s> edi)
    arg1 = arg3
    arg3 = edi
    edi = arg1

if (arg3 s< 0 || edi s>= 0x40 || arg3 s> edi)
    return 

void* esi_1 = arg3
void* edx_1 = arg3 * 0x3920 + &data_f89bcc

do
    if (zx.d(*(arg3 + 0x1b8c220)) != arg4)
        *(arg3 + 0x1b8c220) = arg4.b
        
        if (esi_1 u<= 0x3f && *(edx_1 - 0x28) != 0)
            *edx_1 += 1
    
    arg3 += 1
    esi_1 += 1
    edx_1 += 0x3920
while (arg3 s<= edi)
