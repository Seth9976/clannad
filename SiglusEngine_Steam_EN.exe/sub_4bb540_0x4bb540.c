// 函数: sub_4bb540
// 地址: 0x4bb540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0

int32_t result = *(arg3 + 4)

if (result == 0)
    return 0

char* ecx

if (*arg2 != 0)
    ecx = *arg4
else
    HGLOBAL hMem = GlobalAlloc(GHND, result + 0x40)
    ecx = GlobalLock(hMem)
    *arg2 = hMem
    *arg4 = ecx

void* ecx_2 = &ecx[result]
void* esi_2 = arg3 + 8
char* edi_1 = ecx

while (edi_1 != ecx_2)
    int16_t edx
    edx.b = *esi_2
    esi_2 += 1
    edx:1.b = 8
    char i
    
    do
        if (edi_1 == ecx_2)
            return result
        
        if ((edx.b & 1) == 0)
            int32_t eax_7
            eax_7.w = *esi_2
            edi_1 = __builtin_memcpy(edi_1, edi_1 - (eax_7 u>> 4), (eax_7 & 0xf) + 2)
            esi_2 += 2
        else
            *edi_1 = *esi_2
            edi_1 = &edi_1[1]
            esi_2 += 1
        
        edx.b u>>= 1
        i = edx:1.b
        edx:1.b -= 1
    while (i != 1)

return result
