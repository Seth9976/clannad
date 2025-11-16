// 函数: sub_42bae0
// 地址: 0x42bae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = data_91e8fc

if (esi != 0)
    int32_t edx_1 = 0
    void* ecx_1 = &data_907efc
    
    if (esi s> 0)
        while (true)
            int32_t eax_2 = *ecx_1
            
            if (eax_2 s> 0x4c)
                bool cond:1_1
                
                if (eax_2 s<= 0x420)
                    if (eax_2 s>= 0x41d)
                        goto label_42bb8c
                    
                    if (eax_2 s< 0x41a)
                        goto label_42bb5c
                    
                    cond:1_1 = eax_2 s<= 0x41b
                else if (eax_2 s< 0x7d0)
                label_42bb5c:
                    edx_1 += 1
                    ecx_1 += 0x2d4
                    
                    if (edx_1 s>= esi)
                        break
                    
                    continue
                else
                    cond:1_1 = eax_2 s<= 0x7d2
                
                if (cond:1_1)
                    goto label_42bb8c
                
                goto label_42bb5c
            
            if (eax_2 s>= 0x49)
            label_42bb8c:
                
                if (data_1bfe294 != 0 && ecx_1 != 0xfffffffc && *(ecx_1 + 4) != 0)
                    char var_210[0x208]
                    sub_4cfd70(&var_210, ecx_1 + 4)
                    char (* ecx_5)[0x208] = &var_210
                    
                    while (true)
                        char eax_6 = *ecx_5
                        
                        if (eax_6 u>= 0x80 && (eax_6 u< 0xa0 || eax_6 u> 0xdf) && eax_6 u< 0xfe)
                            ecx_5 = &(*ecx_5)[2]
                            continue
                        
                        if (eax_6 == 0)
                            break
                        
                        if (eax_6 u>= 0x61 && eax_6 u<= 0x7a)
                            *ecx_5 = eax_6 - 0x20
                        
                        ecx_5 = &(*ecx_5)[1]
                    
                    char* edi_1 = data_1bfe29c
                    int32_t i = 0
                    
                    if (data_1bfe294 s> 0)
                        do
                            if (sub_4d0f10(edi_1, &var_210) == 0)
                                sub_5f02dd(eax_1 ^ &__saved_ebp)
                                return &edi_1[0x40]
                            
                            i += 1
                            edi_1 -= 0xffffff80
                        while (i s< data_1bfe294)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 0
            
            if (eax_2 - 0x14 u> 0x33)
                goto label_42bb5c
            
            switch (eax_2)
                case 0x14, 0x32, 0x33, 0x35, 0x36, 0x37, 0x38, 0x46, 0x47
                    goto label_42bb8c
                case 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                        0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
                        0x2e, 0x2f, 0x30, 0x31, 0x34, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 
                        0x40, 0x41, 0x42, 0x43, 0x44, 0x45
                    goto label_42bb5c

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
