// 函数: sub_6b22c0
// 地址: 0x6b22c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1 + 8
int32_t i_1 = 0x100
uint32_t result
int32_t i

do
    if (*(esi - 4) == 1)
        *(esi - 4) = 0
    
    if (*esi == 1)
        *esi = 0
    
    if (*(esi + 4) == 2)
        *(esi + 4) = 0
    
    if (*(esi + 0x28) == 1)
        *(esi + 0x28) = 0
    
    result = timeGetTime()
    int32_t edx_1 = *(esi + 0x10)
    
    if (edx_1 == 0 || result - edx_1 u>= 0xa)
        *(esi + 0x1c) = *(esi + 0x18)
        int32_t eax_2 = *(esi + 0x20)
        *(esi + 0x14) = edx_1
        *(esi + 0x24) = eax_2
        *(esi + 0x10) = result
        *(esi + 0x18) = *(esi + 8)
        result = *(esi + 0xc)
        *(esi + 0x20) = result
    
    esi += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
return result
