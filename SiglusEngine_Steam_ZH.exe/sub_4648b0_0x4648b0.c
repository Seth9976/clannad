// 函数: sub_4648b0
// 地址: 0x4648b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[5] == 0xca)
    sub_4972a0(arg1)
    
    if (arg1[0x10] != 0)
        arg1[5] = 0xcf
        return 1
    
    arg1[5] = 0xcb

int32_t ecx = arg1[5]

if (ecx != 0xcb)
    if (ecx != 0xcc)
        void* eax_12 = *arg1
        *(eax_12 + 0x14) = 0x14
        *(eax_12 + 0x18) = ecx
        (*eax_12)(arg1)
    
    sub_4647b0(arg1)
    return 1

if (*(arg1[0x6e] + 0x10) != 0)
    while (true)
        int32_t eax_4 = arg1[2]
        
        if (eax_4 != 0)
            (*eax_4)(arg1)
        
        int32_t eax_5 = (*arg1[0x6e])(arg1)
        
        if (eax_5 == 0)
            return 0
        
        if (eax_5 == 2)
            break
        
        void* ecx_3 = arg1[2]
        
        if (ecx_3 != 0)
            if (eax_5 != 3 && eax_5 != 1)
                continue
            
            int32_t eax_7 = *(ecx_3 + 4) + 1
            *(ecx_3 + 4) = eax_7
            
            if (eax_7 s>= *(ecx_3 + 8))
                *(ecx_3 + 8) += arg1[0x51]

arg1[0x27] = arg1[0x25]
sub_4647b0(arg1)
return 1
