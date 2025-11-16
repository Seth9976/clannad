// 函数: sub_42e3c0
// 地址: 0x42e3c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* result = arg1
int32_t ecx = *(arg2 + 0x54)

if (ecx != 0)
    *(result + 0x54) = ecx
    void* esi_1 = result + 0x50
    uint32_t eax = *(result + 0x54) * 0x178
    *(result + 0x4c) = 0
    *esi_1 = 0
    sub_4d6960(eax, esi_1, result + 0x4c, eax, "HAIKEI_LAYER")
    result = arg2
    void* edi_1 = *esi_1
    void* esi_2 = *(arg2 + 0x50)
    int32_t i = 0
    
    if (*(result + 0x54) s> 0)
        do
            sub_4d1c30(result, esi_2, edi_1, 0x178)
            sub_42e320(edi_1, esi_2)
            result = arg2
            i += 1
            edi_1 += 0x178
            esi_2 += 0x178
        while (i s< *(result + 0x54))

return result
