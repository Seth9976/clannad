// 函数: sub_729ff0
// 地址: 0x729ff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1[6]
int32_t edi = ebx[1]
char* ecx = *ebx

if (edi != 0)
    goto label_72a025

if (ebx[3](arg1) != 0)
    ecx = *ebx
    edi = ebx[1]
label_72a025:
    void* ecx_1 = &ecx[1]
    uint32_t edx_2 = zx.d(*ecx) << 8
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_72a04a
    
    if (ebx[3](arg1) != 0)
        ecx_1 = *ebx
        edi_1 = ebx[1]
    label_72a04a:
        int32_t edx_4 = edx_2 - 2 + zx.d(*ecx_1)
        void* ecx_2 = ecx_1 + 1
        int32_t edi_2 = edi_1 - 1
        void* var_14_1 = ecx_2
        int32_t var_8_2 = edx_4
        bool cond:0_1 = edx_4 == 0
        
        if (edx_4 s> 0)
            while (true)
                if (edi_2 == 0)
                    if (ebx[3](arg1) == 0)
                        return 0
                    
                    ecx_2 = *ebx
                    edi_2 = ebx[1]
                
                uint32_t eax_6 = zx.d(*ecx_2)
                char* ecx_3 = ecx_2 + 1
                int32_t edi_3 = edi_2 - 1
                
                if (edi_2 == 1)
                    if (ebx[3](arg1) == 0)
                        return 0
                    
                    ecx_3 = *ebx
                    edi_3 = ebx[1]
                
                edi_2 = edi_3 - 1
                uint32_t edx_5 = zx.d(*ecx_3)
                var_8_2 -= 2
                var_14_1 = &ecx_3[1]
                *(*arg1 + 0x14) = 0x51
                *(*arg1 + 0x18) = eax_6
                *(*arg1 + 0x1c) = edx_5
                (*(*arg1 + 4))(arg1, 1)
                uint32_t edx_6 = eax_6
                
                if (edx_6 s< 0 || edx_6 s>= 0x20)
                    *(*arg1 + 0x14) = 0x1d
                    *(*arg1 + 0x18) = edx_6
                    (**arg1)(arg1)
                    edx_6 = eax_6
                
                if (edx_6 s< 0x10)
                    char ecx_6 = edx_5.b & 0xf
                    char eax_18 = (edx_5 s>> 4).b
                    *(edx_6 + arg1 + 0xcb) = ecx_6
                    *(edx_6 + arg1 + 0xdb) = eax_18
                    
                    if (ecx_6 u> eax_18)
                        *(*arg1 + 0x14) = 0x1e
                        *(*arg1 + 0x18) = edx_5
                        (**arg1)(arg1)
                else
                    *(edx_6 + arg1 + 0xdb) = edx_5.b
                
                cond:0_1 = var_8_2 == 0
                
                if (var_8_2 s<= 0)
                    break
                
                ecx_2 = var_14_1
        
        if (not(cond:0_1))
            *(*arg1 + 0x14) = 0xc
            (**arg1)(arg1)
        
        ebx[1] = edi_2
        *ebx = var_14_1
        void* result
        result.b = 1
        return result

return 0
