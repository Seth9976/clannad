// 函数: sub_49f7a8
// 地址: 0x49f7a8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t i = 0
*(arg1 + 4) = 0
int32_t eax = *(arg2 + 4)
*(arg1 + 0x1c) = eax
int32_t eax_2 = sub_745f3f(eax << 2)
*(arg1 + 0x10) = eax_2

if (eax_2 != 0)
    if (*(arg2 + 4) u> 0)
        do
            if (sub_49f5fb(arg1, *(*(arg2 + 0x10) + (i << 2))) == 0xffffffff)
                return 0x8007000e
            
            i += 1
        while (i u< *(arg2 + 4))
    
    *(arg1 + 8) = 0
    int32_t eax_5 = *(arg2 + 8)
    *(arg1 + 0x20) = eax_5
    int32_t eax_7 = sub_745f3f(eax_5 << 2)
    int32_t i_1 = 0
    *(arg1 + 0x14) = eax_7
    
    if (eax_7 != 0)
        if (*(arg2 + 8) u> 0)
            do
                if (sub_49f64b(arg1, *(*(arg2 + 0x14) + (i_1 << 2))) == 0xffffffff)
                    return 0x8007000e
                
                i_1 += 1
            while (i_1 u< *(arg2 + 8))
        
        *(arg1 + 0xc) = 0
        int32_t eax_10 = *(arg2 + 0xc)
        *(arg1 + 0x24) = eax_10
        int32_t eax_12 = sub_745f3f(eax_10 << 2)
        int32_t ebx = 0
        *(arg1 + 0x18) = eax_12
        
        if (eax_12 != 0)
            if (*(arg2 + 0xc) u<= 0)
                return 0
            
            while (true)
                if (sub_49f69d(arg1, *(*(arg2 + 0x18) + (ebx << 2))) == 0xffffffff)
                    return 0x8007000e
                
                ebx += 1
                
                if (ebx u>= *(arg2 + 0xc))
                    return 0

return 0x8007000e
