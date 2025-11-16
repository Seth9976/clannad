// 函数: sub_99ce00
// 地址: 0x99ce00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1c)

if (esi != 0)
    int32_t edi_1 = *(esi + 8)
    
    if (edi_1 s> 0)
        int128_t var_18
        __builtin_memset(&var_18, 0, 0x14)
        int32_t eax_1 = *arg2
        var_18:0xc.d = eax_1
        var_18:8.d = eax_1
        int32_t var_8 = arg2[1]
        
        if (sub_742fa0(&var_18, 1) != 0)
            return 0xffffff79
        
        uint32_t i = edi_1 - 1
        int32_t edx = 0
        
        for (; i != 0; i u>>= 1)
            edx += 1
        
        int32_t eax_5 = sub_742fa0(&var_18, edx)
        
        if (eax_5 != 0xffffffff)
            int32_t* eax_6 = *(esi + (eax_5 << 2) + 0x20)
            
            if (eax_6 != 0)
                return *(esi + (*eax_6 << 2))
        
        return 0xffffff78

return 0xffffff7f
