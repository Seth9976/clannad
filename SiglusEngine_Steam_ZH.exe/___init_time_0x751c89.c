// 函数: ___init_time
// 地址: 0x751c89
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi

if (*(arg1 + 0xb4) == 0)
    esi = &data_b4c9c8
else
    int32_t* eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_74cccf(1, 0x164)
    esi = eax_1
    
    if (esi == 0)
        return 1
    
    if (__get_lc_time(eax_1, edx_1, 0x164, esi, arg1) != 0)
        ___free_lc_time(esi)
        _free(esi)
        return 1
    
    esi[0x2c] = 1

void* eax_3 = *(arg1 + 0x9c)

if (eax_3 != &data_b4c9c8)
    *(eax_3 + 0xb0)
    *(eax_3 + 0xb0) -= 1

*(arg1 + 0x9c) = esi
return 0
