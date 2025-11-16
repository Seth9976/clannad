// 函数: sub_4d1be0
// 地址: 0x4d1be0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t esi = arg2
int32_t edi = arg3

for (uint32_t i = arg4 u>> 2; i != 0; i -= 1)
    bool cond:0_1 = *esi != *edi
    esi += 4
    edi += 4
    
    if (cond:0_1)
        return 1

int32_t ebx_1 = arg4 & 3

if (ebx_1 == 0)
    return result

int32_t ecx_1 = ebx_1

while (true)
    bool cond:1_1 = *esi != *edi
    esi += 1
    edi += 1
    
    if (cond:1_1)
        return 1
    
    ecx_1 -= 1
    
    if (ecx_1 == 0)
        return result
