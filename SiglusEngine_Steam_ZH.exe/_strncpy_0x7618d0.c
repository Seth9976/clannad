// 函数: _strncpy
// 地址: 0x7618d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg3

if (ecx == 0)
    return arg1

int32_t ebx_1 = ecx
char* esi_1 = arg2
char* edi_1 = arg1
int32_t eax
uint32_t i_2
uint32_t i_3

if ((esi_1 & 3) != 0)
    do
        eax.b = *esi_1
        esi_1 = &esi_1[1]
        *edi_1 = eax.b
        edi_1 = &edi_1[1]
        int32_t temp0_1 = ecx
        ecx -= 1
        
        if (temp0_1 == 1)
            return arg1
        
        if (eax.b == 0)
            while ((edi_1 & 3) != 0)
                *edi_1 = eax.b
                edi_1 = &edi_1[1]
                int32_t temp2_1 = ecx
                ecx -= 1
                
                if (temp2_1 == 1)
                    return arg1
            
            ebx_1 = ecx
            i_3 = ecx u>> 2
            
            if (i_3 == 0)
                goto label_761963
            
        label_7619d7:
            eax = 0
            uint32_t i
            
            do
                *edi_1 = 0
                edi_1 = &edi_1[4]
                i = i_3
                i_3 -= 1
            while (i != 1)
        label_7619e3:
            ebx_1 &= 3
            
            if (ebx_1 != 0)
                goto label_761963
            
            return arg1
    while ((esi_1 & 3) != 0)
    
    ebx_1 = ecx
    i_2 = ecx u>> 2
    
    if (i_2 != 0)
        goto label_76197d
    
label_76191e:
    ebx_1 &= 3
    
    if (ebx_1 != 0)
        goto label_761923
else
    i_2 = ecx u>> 2
    
    if (i_2 != 0)
    label_76197d:
        uint32_t i_1
        
        do
            int32_t eax_3 = *esi_1
            int32_t edx_2 = *esi_1
            esi_1 = &esi_1[4]
            
            if (((eax_3 ^ 0xffffffff ^ (0x7efefeff + eax_3)) & 0x81010100) != 0)
                if (edx_2.b == 0)
                    *edi_1 = 0
                label_7619cd:
                    edi_1 = &edi_1[4]
                    eax = 0
                    i_3 = i_2 - 1
                    
                    if (i_2 == 1)
                        goto label_7619e3
                    
                    goto label_7619d7
                
                if (edx_2:1.b == 0)
                    *edi_1 = edx_2 & 0xff
                    goto label_7619cd
                
                if ((edx_2 & 0xff0000) == 0)
                    *edi_1 = edx_2 & 0xffff
                    goto label_7619cd
                
                if ((edx_2 & 0xff000000) == 0)
                    *edi_1 = edx_2
                    goto label_7619cd
            
            *edi_1 = edx_2
            edi_1 = &edi_1[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        goto label_76191e
    
label_761923:
    
    while (true)
        eax.b = *esi_1
        esi_1 = &esi_1[1]
        *edi_1 = eax.b
        edi_1 = &edi_1[1]
        
        if (eax.b == 0)
            while (true)
                int32_t temp3_1 = ebx_1
                ebx_1 -= 1
                
                if (temp3_1 == 1)
                    return arg1
                
            label_761963:
                *edi_1 = eax.b
                edi_1 = &edi_1[1]
        else
            int32_t temp4_1 = ebx_1
            ebx_1 -= 1
            
            if (temp4_1 == 1)
                break
return arg1
