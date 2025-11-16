// 函数: sub_4a32b7
// 地址: 0x4a32b7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
void* esi = *(*(arg1 + 0x14) + (arg3 << 2))
int32_t eax_2 = *(*(ebx + 8) + (*(esi + 0xc) << 2))
int32_t edi
int32_t var_58 = edi
int32_t var_c = 4

if ((*(esi + 3) & 0x80) != 0)
    var_c = 1
else
    bool cond:2_1 = eax_2 u<= 1
    
    if (eax_2 != 1)
        goto label_4a32fa
    
    if ((*(arg1 + 0x6c) & 4) != 0)
        var_c = 1
    else
        cond:2_1 = eax_2 u<= eax_2
    label_4a32fa:
        
        if (cond:2_1 || (*(arg1 + 0x6c) & 2) == 0)
            if (sub_49e81b(*(*(arg1 + 0x18) + (*(esi + 0x48) << 2))) != 0)
                var_c = 1
        else
            var_c = 1

int32_t esi_1 = *(esi + 0xc)
int32_t var_3c = 0xffffffff
void var_38
void* edi_1 = &var_38
*edi_1 = 0xffffffff
void* edi_2 = edi_1 + 4
*edi_2 = 0xffffffff
*(edi_2 + 4) = 0xffffffff
int32_t var_4c = 0xffffffff
void var_48
void* edi_5 = &var_48
*edi_5 = 0xffffffff
void* edi_6 = edi_5 + 4
*edi_6 = 0xffffffff
*(edi_6 + 4) = 0xffffffff
int32_t edi_9 = 0
int32_t var_8 = 4
arg3 = 0
int32_t esi_2 = esi_1 << 4

do
    int32_t eax_6 = *(esi_2 + *(ebx + 0x18))
    int32_t var_1c_1 = 0
    
    if (eax_6 == 0xffffffff)
        var_8 -= 1
    else
        int32_t eax_8 = *(esi_2 + *(ebx + 0x30))
        int32_t var_14_1 = 0
        
        if (eax_8 u<= 0)
            var_8 -= 1
        else
            int32_t* var_10_1 = *(ebx + 0x38) + (*(esi_2 + *(ebx + 0x34)) << 2)
            
            do
                int32_t eax_13 = *var_10_1
                int32_t ecx_4 = *(*(ebx + 0x10) + (eax_13 u>> 2 << 2))
                
                if (ecx_4 != 0xffffffff)
                    var_1c_1 = 1
                
                if (arg4 == ecx_4)
                    void* edi_10 = *(*(ebx + 0x14) + (eax_13 << 2))
                    
                    if (edi_10 != 0xffffffff && (&var_3c)[edi_10] == 0xffffffff
                            && (var_c != 1 || arg3 == edi_10)
                            && sub_4a31b9(arg1, ebx, eax_6, arg4, edi_10) == 0xffffffff)
                        var_8 -= 1
                        (&var_3c)[edi_10] = arg3
                        (&var_4c)[arg3] = edi_10
                        break
                
                var_14_1 += 1
                var_10_1 = &var_10_1[1]
            while (var_14_1 u< eax_8)
            
            edi_9 = 0
            
            if (var_1c_1 == 0)
                var_8 -= 1
    
    arg3 += 1
    esi_2 += 4
while (arg3 u< 4)

int32_t result = var_8 << 0x1d

if (result u< arg7)
    int32_t eax_17 = 0
    
    if (arg5 s>= 0)
        if (arg5 s> 0 && (arg4.b & 1) == 0)
            eax_17 = 1
    else if ((arg4.b & 1) != 0)
        eax_17 = 1
    
    result |= eax_17 << 0x1c
    arg5 = result
    
    if (result u< arg7)
        while (true)
            if ((&var_4c)[edi_9] == 0xffffffff)
                int32_t eax_22 = *(*(ebx + 0x18) + ((edi_9 + (*(esi + 0xc) << 2)) << 2))
                
                if (eax_22 != 0xffffffff)
                    int32_t ebx_1 = 0
                    
                    if (var_c u> 0)
                        do
                            void* esi_4 = (ebx_1 + edi_9) & 3
                            
                            if (eax_2 == 1)
                                int32_t eax_26
                                
                                if ((*(arg1 + 0x70) & 2) != 0)
                                    eax_26 = **(*(arg1 + 0x18) + (*(esi + 0x48) << 2))
                                
                                if ((*(arg1 + 0x70) & 2) == 0 || (eax_26 & 0xfff00000) != 0x50000000
                                        || (eax_26 & 0xfffff) u>= 4)
                                    esi_4 = 3 - esi_4
                            
                            if ((&var_3c)[esi_4] == 0xffffffff
                                    && sub_4a31b9(arg1, arg2, eax_22, arg4, esi_4) == 0xffffffff)
                                (&var_3c)[esi_4] = edi_9
                                (&var_4c)[edi_9] = esi_4
                                break
                            
                            ebx_1 += 1
                        while (ebx_1 u< var_c)
                    
                    if (var_c == ebx_1)
                        return 0xffffffff
                    
                    if ((*(arg2 + 0x60) & 1) == 0 || eax_2 u> 1)
                        result = arg5 + (ebx_1 << 0x18)
                        arg5 = result
                        
                        if (result u>= arg7)
                            break
                    else
                        result = arg5
                    
                    ebx = arg2
            
            edi_9 += 1
            
            if (edi_9 u>= 4)
                if (arg6 != 0)
                    *arg6 = var_4c
                    void* edi_12 = &arg6[1]
                    void* esi_5 = &var_48
                    *edi_12 = *esi_5
                    void* edi_13 = edi_12 + 4
                    void* esi_6 = esi_5 + 4
                    *edi_13 = *esi_6
                    *(edi_13 + 4) = *(esi_6 + 4)
                
                break

return result
