// 函数: sub_4081c5
// 地址: 0x4081c5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t edx_1 = arg2 & 0x400e
void* ecx = nullptr
void* esi = &arg1[6]
*arg1 = arg2
__builtin_memset(&arg1[2], 0, 0x14)
arg1[0xe] = 0
arg1[0xf] = 0

if (edx_1 == 2)
    ecx = 0xc
else if (edx_1 == 4)
    ecx = 0x10
else if (edx_1 u>= 6)
    arg1[0xe] = (edx_1 u>> 1) - 2
    ecx = (((edx_1 u>> 1) - 2) << 2) + 0xc

if ((arg2.b & 0x10) != 0)
    arg1[2] = ecx
    ecx += 0xc

if ((arg2.b & 0x20) != 0)
    arg1[3] = ecx
    ecx += 4

if ((arg2.b & 0x40) != 0)
    arg1[4] = ecx
    ecx += 4

if (arg2.b s< 0)
    arg1[5] = ecx
    ecx += 4

if ((arg2:1.b & 0xf) != 0)
    int32_t edx_5 = arg2 u>> 8 & 0xf
    *esi = ecx
    arg1[0xf] = edx_5
    
    if (edx_5 u> 8)
        arg1[0xf] = 8
    
    uint32_t ebx_1 = arg2 u>> 0x10
    int32_t i = 0
    
    if (arg1[0xf] u> 0)
        do
            *esi = ecx
            ecx += *(((ebx_1 & 3) << 2) + &data_ab5588)
            ebx_1 u>>= 2
            i += 1
            esi += 4
        while (i u< arg1[0xf])

arg1[1] = ecx
return arg1
