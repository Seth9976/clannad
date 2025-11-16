// 函数: sub_465e20
// 地址: 0x465e20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_7031bc
int32_t edi = 0

if (edx s> 0)
    void* esi_2 = arg1 * 0x650 + &data_72d6bc
    
    do
        int32_t eax_1 = *esi_2
        
        if (eax_1 == 8)
            if (sub_4782d0(edi, arg1) != 0)
                return 1
            
            edx = data_7031bc
        else if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_3 = *(esi_2 + 0x23c)
            
            if (eax_3 == 4 || eax_3 == 8)
                return 1
        
        edi += 1
        esi_2 += 0xca0
    while (edi s< edx)

return 0
