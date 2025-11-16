// 函数: sub_6dc3a0
// 地址: 0x6dc3a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1
char* ecx = arg2
char* esi = arg3
int32_t i_3 = (zx.d(*(result + 0xb)) + 7) s>> 3
char* edi_1 = *(result + 4) - i_3
arg2 = edi_1

if (i_3 != 0)
    int32_t i_2 = i_3
    int32_t i
    
    do
        result.b = *esi
        esi = &esi[1]
        result.b u>>= 1
        *ecx += result.b
        ecx = &ecx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (edi_1 != 0)
    void* edi_3 = ecx - i_3
    int32_t esi_1 = esi - ecx
    char* i_1
    
    do
        uint32_t edx_1 = zx.d(*edi_3)
        ecx = &ecx[1]
        edi_3 += 1
        int32_t eax_2
        int32_t edx_2
        edx_2:eax_2 = sx.q(zx.d(ecx[esi_1 - 1]) + edx_1)
        result = (eax_2 - edx_2) s>> 1
        ecx[0xffffffff] += result.b
        i_1 = arg2
        arg2 -= 1
    while (i_1 != 1)

return result
