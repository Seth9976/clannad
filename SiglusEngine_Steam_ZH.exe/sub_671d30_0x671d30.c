// 函数: sub_671d30
// 地址: 0x671d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
int32_t eax_1 = sub_54b180(1)

if (eax_1 != 0)
    char eax_2
    int32_t ecx_2
    eax_2, ecx_2 = sub_671d90(eax_1)
    
    if (eax_2 == 0)
        return eax_2
    
    void* eax_3 = data_bac4a0
    int32_t var_8_1 = ecx_2
    *(eax_3 + 0x105) = 0
    *(eax_3 + 0x114) = 0
    *(eax_1 + 0x1dc) = *(*(eax_1 + 0x228) + 0x188)
    sub_5d9030(eax_1)

eax_1.b = 1
return eax_1
