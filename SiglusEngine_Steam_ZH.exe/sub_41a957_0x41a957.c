// 函数: sub_41a957
// 地址: 0x41a957
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
void* eax = ebx[1]
void* ecx = *ebx
int32_t edi
int32_t var_18 = edi
int32_t* var_10 = ebx

if (*(eax + 4) != *(ecx + 4) || *(ecx + 0x18) != 0)
    return 0x80004005

if (*(eax + 0x68) == *(ecx + 0x68) && *(eax + 0x6c) == *(ecx + 0x6c)
        && *(eax + 0x70) == *(ecx + 0x70) && *(eax + 0x10) == *(ecx + 0x10))
    if (*(eax + 0xc) == 0)
        return sub_41995a(ebx)
    
    if (*(eax + 0x1c) == 0)
    label_41a9e0:
        *(eax + 0x10) = 0
        *(*ebx + 0x10) = 0
        void* ecx_2 = ebx[1]
        int32_t i = 0
        
        if (*(ecx_2 + 0x70) u> 0)
            void* esi_6 = *ebx
            int32_t edi_2 = *(ecx_2 + 0x6c)
            
            do
                void* edx_1 = ebx[1]
                int32_t eax_5 = *(edx_1 + 0x64) * i + *(edx_1 + 0x20)
                int32_t edx_4 = *(esi_6 + 0x64) * i + *(esi_6 + 0x20)
                int32_t var_c_1 = 0
                
                if (edi_2 u> 0)
                    do
                        int32_t ecx_3 = *(ecx_2 + 0x74)
                        int32_t esi_8
                        int32_t edi_4
                        edi_4, esi_8 = __builtin_memcpy(eax_5, edx_4, ecx_3 u>> 2 << 2)
                        ebx = var_10
                        __builtin_memcpy(edi_4, esi_8, ecx_3 & 3)
                        ecx_2 = ebx[1]
                        esi_6 = *ebx
                        eax_5 += *(ecx_2 + 0x60)
                        edx_4 += *(esi_6 + 0x60)
                        var_c_1 += 1
                        edi_2 = *(ecx_2 + 0x6c)
                    while (var_c_1 u< edi_2)
                
                i += 1
                ecx_2 = ebx[1]
            while (i u< *(ecx_2 + 0x70))
        
        return 0
    
    int32_t* esi_5 = *(eax + 0x38)
    int32_t* edi_1 = *(ecx + 0x38)
    
    if (esi_5 == edi_1)
        goto label_41a9e0
    
    int32_t i_1 = 0x100
    bool cond:3_1 = false
    
    while (i_1 != 0)
        int32_t temp0_1 = *esi_5
        int32_t temp1_1 = *edi_1
        cond:3_1 = temp0_1 != temp1_1
        esi_5 = &esi_5[1]
        edi_1 = &edi_1[1]
        i_1 -= 1
        
        if (temp0_1 != temp1_1)
            break
    
    if (not(cond:3_1))
        goto label_41a9e0

return 0x80004005
