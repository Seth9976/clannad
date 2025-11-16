// 函数: sub_476790
// 地址: 0x476790
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (arg1 s>= 0 && arg1 s< data_7031bc)
    eax = (arg2 + (arg1 << 1)) * 0x7a0 + &data_98c178
    void* esi_1 = *(eax + 8)
    
    if (esi_1 != 0)
        int32_t result = *eax
        
        if (result s<= 0)
            return result
        
        void* ecx = esi_1 + 0x2d0
        int32_t i
        
        do
            sub_462a80(ecx)
            ecx += 0x7d8
            i = result
            result -= 1
        while (i != 1)
        return result

return sub_476410(eax, arg2, arg1, 0)
