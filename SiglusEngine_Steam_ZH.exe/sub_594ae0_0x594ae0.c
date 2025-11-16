// 函数: sub_594ae0
// 地址: 0x594ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x414)
*arg2 = 0

switch (eax)
    case nullptr
        int32_t eax_3 = *(data_bac408 + 0xa4) + 0xa0
        *arg2 = eax_3
        return eax_3
    case 1
        int32_t eax_6 = *(data_bac408 + 0xa4) + 0x98c
        *arg2 = eax_6
        return eax_6
    case 2
        int32_t eax_9 = *(data_bac408 + 0xa4) + 0x1278
        *arg2 = eax_9
        return eax_9
    case 3
        eax = data_bac41c
        
        if (*(eax + 0x864) != 0)
            int32_t eax_11 = *(eax + 0x6b8) + 0xa0
            *arg2 = eax_11
            return eax_11
    case 4
        eax = data_bac41c
        
        if (*(eax + 0x864) != 0)
            int32_t eax_13 = *(eax + 0x6b8) + 0x98c
            *arg2 = eax_13
            return eax_13
    case 5
        eax = data_bac41c
        
        if (*(eax + 0x864) != 0)
            eax = *(eax + 0x6b8) + 0x1278
            *arg2 = eax

return eax
