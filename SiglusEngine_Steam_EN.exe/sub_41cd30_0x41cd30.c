// 函数: sub_41cd30
// 地址: 0x41cd30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0

if (arg2 != 0 && arg3 != 0)
    void* esi_1 = arg2
    void* edi_1 = arg3
    
    for (int32_t i = 0x23; i != 0; i -= 1)
        bool cond:0_1 = *esi_1 != *edi_1
        esi_1 += 4
        edi_1 += 4
        
        if (cond:0_1)
            var_8 = 1
            break

int32_t* ecx_2 = arg5

if (ecx_2 == 0)
label_41cf88:
    
    if (var_8 != 0)
        void* esi_6 = arg2
        int32_t ecx_7 = *(esi_6 + 0x64)
        
        if (ecx_7 != *(arg3 + 0x64))
            goto label_41cfef
        
        int32_t edx_7 = *(esi_6 + 0x68)
        
        if (edx_7 != *(arg3 + 0x68))
            goto label_41cfef
        
        arg1 = *(esi_6 + 0x6c)
        
        if (arg1 != *(arg3 + 0x6c))
            goto label_41cfef
        
        int32_t esi_7 = *(esi_6 + 0x70)
        
        if (esi_7 != *(arg3 + 0x70))
            esi_6 = arg2
        label_41cfef:
            
            if (ecx_7 != 0xffffffff || *(esi_6 + 0x68) != ecx_7 || *(esi_6 + 0x6c) != ecx_7
                    || *(esi_6 + 0x70) != ecx_7)
                int32_t var_24_7 = *(esi_6 + 0x70)
                int32_t var_28_7 = *(esi_6 + 0x6c)
                sub_494c90(ecx_7, *(esi_6 + 0x68))
            
            int32_t ecx_8 = *(arg3 + 0x64)
            
            if (ecx_8 != 0xffffffff || *(arg3 + 0x68) != ecx_8 || *(arg3 + 0x6c) != ecx_8
                    || *(arg3 + 0x70) != ecx_8)
                int32_t var_24_8 = *(arg3 + 0x70)
                int32_t var_28_8 = *(arg3 + 0x6c)
                sub_494c90(ecx_8, *(arg3 + 0x68))
        else if (ecx_7 != 0xffffffff || edx_7 != ecx_7 || arg1 != ecx_7 || esi_7 != ecx_7)
            int32_t var_24_6 = esi_7
            int32_t* var_28_6 = arg1
            sub_494c90(ecx_7, edx_7)
    
    return 

int32_t* ebx_1 = arg4

if (ebx_1 == 0)
    goto label_41cf88

if (var_8 != 0)
label_41ce06:
    arg1 = *ecx_2
    
    if (arg1 == *ebx_1)
        int32_t i_4 = 0
        
        if (arg1 s> 0)
            void* edi_3 = &ebx_1[0x21]
            int32_t* ebx_4 = ebx_1 - ecx_2
            void* esi_5 = &ecx_2[0x41]
            int32_t i_1
            
            do
                int32_t ecx_6 = *(esi_5 - 0x100)
                
                if (ecx_6 != *(edi_3 - 0x80))
                label_41cf2f:
                    
                    if (ecx_6 != 0xffffffff || *(esi_5 - 0x80) != ecx_6 || *esi_5 != ecx_6
                            || *(esi_5 + 0x80) != ecx_6)
                        int32_t var_24_4 = *(esi_5 + 0x80)
                        int32_t var_28_4 = *esi_5
                        sub_494c90(ecx_6, *(esi_5 - 0x80))
                    
                    ecx_6 = *(edi_3 - 0x80)
                    
                    if (ecx_6 != 0xffffffff || *edi_3 != ecx_6 || *(ebx_4 + esi_5) != ecx_6
                            || *(edi_3 + 0x100) != ecx_6)
                        int32_t var_24_5 = *(edi_3 + 0x100)
                        int32_t var_28_5 = *(ebx_4 + esi_5)
                        sub_494c90(ecx_6, *edi_3)
                else
                    int32_t edx_4 = *(esi_5 - 0x80)
                    
                    if (edx_4 != *edi_3)
                        goto label_41cf2f
                    
                    int32_t eax_6 = *esi_5
                    
                    if (eax_6 != *(ebx_4 + esi_5))
                        goto label_41cf2f
                    
                    ecx_6 = *(esi_5 - 0x100)
                    
                    if (*(esi_5 + 0x80) != *(edi_3 + 0x100))
                        goto label_41cf2f
                    
                    if (ecx_6 != 0xffffffff || edx_4 != ecx_6 || eax_6 != ecx_6
                            || *(esi_5 + 0x80) != ecx_6)
                        int32_t var_24_3 = *(esi_5 + 0x80)
                        int32_t var_28_3 = eax_6
                        sub_494c90(ecx_6, edx_4)
                
                esi_5 += 4
                i_1 = i_4 + 1
                edi_3 += 4
                i_4 = i_1
            while (i_1 s< *arg5)
    else
        int32_t i_2 = 0
        
        if (arg1 s> 0)
            arg1 = arg5
            void* esi_3 = &ecx_2[0x41]
            
            do
                int32_t ecx_3 = *(esi_3 - 0x100)
                
                if (ecx_3 != 0xffffffff || *(esi_3 - 0x80) != ecx_3 || *esi_3 != ecx_3
                        || *(esi_3 + 0x80) != ecx_3)
                    int32_t var_24_1 = *(esi_3 + 0x80)
                    int32_t var_28_1 = *esi_3
                    sub_494c90(ecx_3, *(esi_3 - 0x80))
                    arg1 = arg5
                
                i_2 += 1
                esi_3 += 4
            while (i_2 s< *arg1)
        
        int32_t i_3 = 0
        
        if (*ebx_1 s> 0)
            void* esi_4 = &ebx_1[0x41]
            
            do
                int32_t ecx_4 = *(esi_4 - 0x100)
                
                if (ecx_4 != 0xffffffff || *(esi_4 - 0x80) != ecx_4 || *esi_4 != ecx_4
                        || *(esi_4 + 0x80) != ecx_4)
                    int32_t var_24_2 = *(esi_4 + 0x80)
                    int32_t var_28_2 = *esi_4
                    sub_494c90(ecx_4, *(esi_4 - 0x80))
                
                i_3 += 1
                esi_4 += 4
            while (i_3 s< *ebx_1)
    
    goto label_41cf88

int32_t edi_2 = *ecx_2

if (edi_2 != *ebx_1)
    goto label_41ce06

int32_t esi_2 = 0

if (edi_2 s<= 0)
    return 

void* edx_1 = &ebx_1[0x41]
void* ecx_1 = &ecx_2[1]
void* eax_1 = ebx_1 - arg5

while (true)
    ebx_1 = arg4
    
    if (*ecx_1 != *(eax_1 + ecx_1) || *(ecx_1 + 0x80) != *(edx_1 - 0x80)
            || *(ecx_1 + 0x100) != *edx_1 || *(ecx_1 + 0x180) != *(edx_1 + 0x80))
        ecx_2 = arg5
        break
    
    esi_2 += 1
    ecx_1 += 4
    edx_1 += 4
    
    if (esi_2 s>= edi_2)
        return 
    
    continue

goto label_41ce06
