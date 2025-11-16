// 函数: sub_4781c0
// 地址: 0x4781c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (arg1 s>= 0 && arg1 s< data_7031bc)
    eax = (arg2 + (arg1 << 1)) * 0x7a0 + &data_98c178
    void* esi_1 = *(eax + 8)
    
    if (esi_1 != 0)
        int32_t i_1 = *eax
        
        if (i_1 s<= 0)
            return eax
        
        int32_t edx = data_131310c
        void* eax_3 = esi_1 + 0x3e4
        int32_t i
        
        do
            *(eax_3 - 0xc) = 0
            eax_3 += 0x7d8
            *(eax_3 - 0x7d8) = edx
            i = i_1
            i_1 -= 1
        while (i != 1)
        return eax_3

return sub_476410(eax, arg2, arg1, 0)
