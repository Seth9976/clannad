// 函数: sub_40b004
// 地址: 0x40b004
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = *(arg1 + 0x94)

if (result != 0)
    int32_t edi
    int32_t var_c_1 = edi
    int32_t* edi_2 = zx.d(*(result + 2)) + arg2
    *edi_2 = *arg3
    void* edi_3 = &edi_2[1]
    void* esi_2 = &arg3[1]
    *edi_3 = *esi_2
    *(edi_3 + 4) = *(esi_2 + 4)

return result
