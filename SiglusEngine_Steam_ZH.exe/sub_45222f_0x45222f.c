// 函数: sub_45222f
// 地址: 0x45222f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
void* arg_4
void* esi = arg_4
int32_t edi
int32_t var_18 = edi
void* arg_c
int32_t* edi_1 = arg_c
*(esi + 0x28) = 4
*(esi + 0x38) = 0
*(esi + 0x18) = 0
*(esi + 0x1c) = 0

if (arg2 != 0)
    int32_t eax_1 = (*(*arg2 + 0x10))(arg2)
    
    if (*edi_1 + 1 u<= eax_1)
        *(esi + 0x2c) = *((*(*arg2 + 0xc))(arg2) + (*edi_1 << 2))

*edi_1 += 1

if (arg2 != 0)
    int32_t eax_6 = (*(*arg2 + 0x10))(arg2)
    
    if (*edi_1 + 1 u<= eax_6)
        *(esi + 0x30) = *((*(*arg2 + 0xc))(arg2) + (*edi_1 << 2))

*edi_1 += 1

if (arg2 != 0 && (*(*arg2 + 0x10))(arg2) u>= *edi_1)
    arg2 = nullptr
    *(arg1 + 0xa8) += 1
    void* eax_12 = *(arg1 + 0x20)
    void* ecx_11 = *(esi + 0x2c)
    
    if (eax_12 + ecx_11 + 0x14 u<= *(arg1 + 0x1c) + eax_12)
        int32_t edi_3 = *(eax_12 + ecx_11 + 4)
        int32_t edx_3 = *(eax_12 + ecx_11 + 0x10)
        
        if (edi_3 u<= 1)
            int32_t eax_18 = 1
            
            if (edx_3 u> 1)
                eax_18 = edx_3
            
            *(arg1 + 0x128) += eax_18 << 4
        else if (edi_3 u<= 3)
            int32_t eax_16 = 1
            
            if (edx_3 u> 1)
                eax_16 = edx_3
            
            *(arg1 + 0x124) += eax_16 << 6
        else if (edi_3 == 5)
            void* esi_1 = *(esi + 0x30)
            var_c = ecx_11
            arg_4 = eax_12 + esi_1
            arg_c = ecx_11 + eax_12
            var_8 = esi_1
            int32_t* eax_14 = sub_44d0fb(arg1, &arg_c, &arg_4, 0)
            arg2 = eax_14
            
            if (eax_14 s>= 0)
                int32_t eax_15 = sub_443af4(*(arg1 + 0x20), &var_c, &var_8)
                *(arg1 + 0x12c) += eax_15
    
    return arg2

return 0x80004005
