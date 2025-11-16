// 函数: sub_42e320
// 地址: 0x42e320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* result = arg1
int32_t ecx = *(arg2 + 0x174)

if (ecx != 0)
    *(result + 0x174) = ecx
    void* esi_1 = result + 0x170
    *(result + 0x16c) = 0
    int32_t eax = *(result + 0x174)
    *esi_1 = 0
    int32_t eax_2 = eax * 0x30
    sub_4d6960(eax_2, esi_1, result + 0x16c, eax_2, "HAIKEI_DATA")
    result = arg2
    void* edi_1 = *esi_1
    void* esi_2 = *(arg2 + 0x170)
    int32_t i = 0
    
    if (*(result + 0x174) s> 0)
        do
            sub_4d1c30(result, esi_2, edi_1, 0x30)
            sub_42e2a0(edi_1, esi_2)
            result = arg2
            i += 1
            edi_1 += 0x30
            esi_2 += 0x30
        while (i s< *(result + 0x174))

return result
