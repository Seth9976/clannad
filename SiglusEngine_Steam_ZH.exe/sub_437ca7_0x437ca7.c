// 函数: sub_437ca7
// 地址: 0x437ca7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if (arg1 != 0 && *(arg1 + 4) == 9 && arg2 != 0 && *(arg2 + 4) == 9)
    int32_t esi_1 = *(arg1 + 0x14)
    int32_t edi_1 = *(arg2 + 0x14)
    
    if (esi_1 == edi_1)
        *arg3 = esi_1
        return 0
    
    int32_t eax_3 = *((esi_1 << 3) + &data_ac01c0)
    int32_t ecx_1 = *((edi_1 << 3) + &data_ac01c0)
    
    if (eax_3 u> ecx_1)
        ecx_1 = eax_3
    
    char eax_5 = (*((esi_1 << 3) + &data_ac01c4)).b & (*((edi_1 << 3) + &data_ac01c4)).b
    
    if ((1 & eax_5) != 0)
        *arg3 = 0
        return 0
    
    if ((4 & eax_5) != 0)
        if (ecx_1 == 0)
            *arg3 = 5
            return 0
        
        if (ecx_1 == 8)
            *arg3 = 6
            return 0
        
        if (ecx_1 == 0x10)
            *arg3 = 7
            return 0
        
        if (ecx_1 != 0x20 && ecx_1 != 0x40)
            return 0
        
        *arg3 = 8
        return 0
    
    if ((eax_5 & 2) != 0)
        if (ecx_1 == 0)
            *arg3 = 1
            return 0
        
        if (ecx_1 == 8)
            *arg3 = 2
        else if (ecx_1 == 0x10)
            *arg3 = 3
        else if (ecx_1 == 0x20 || ecx_1 == 0x40)
            *arg3 = 4
        
        return 0
    
    if ((8 & eax_5) != 0)
        if (ecx_1 == 0)
            *arg3 = 9
        else if (ecx_1 == 8 || ecx_1 == 0x10)
            *arg3 = 0xa
        else if (ecx_1 == 0x20)
            *arg3 = 0xb
        else if (ecx_1 == 0x40)
            *arg3 = 0xc
        
        return 0
    
    if ((eax_5 & 0x10) != 0)
        int32_t edx_2 = 0
        int32_t eax_18
        
        while (true)
            int32_t ecx_2 = esi_1
            
            if (edx_2 != 0)
                eax_18 = edi_1
            else
                ecx_2 = edi_1
                eax_18 = esi_1
            
            if (ecx_2 == 0xd)
                break
            
            bool cond:2_1
            
            if (ecx_2 != 0xf)
                if (ecx_2 == 0x14 && eax_18 s>= ecx_2)
                    cond:2_1 = eax_18 s<= 0x18
                    goto label_437e3d
            else if (eax_18 s>= ecx_2)
                cond:2_1 = eax_18 s<= 0x13
            label_437e3d:
                
                if (cond:2_1)
                    break
            edx_2 += 1
            
            if (edx_2 u>= 2)
                return 0x80004005
        
        *arg3 = eax_18
        return 0

return 0x80004005
