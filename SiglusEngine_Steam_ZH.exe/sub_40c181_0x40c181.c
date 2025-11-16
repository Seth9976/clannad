// 函数: sub_40c181
// 地址: 0x40c181
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int32_t* edi_1 = *arg1
int32_t* var_8_1 = edi_1

if (edi_1 != 0)
    int32_t* ebx_1 = arg2
    
    if (ebx_1 u> *arg4)
        int32_t* eax_8 = sub_745f3f(ebx_1 * 0xc)
        
        if (eax_8 == 0)
            arg2 = nullptr
        else
            sub_61cdd0(eax_8, 0xc, ebx_1, sub_52e900)
            arg2 = eax_8
        
        int32_t* result = arg2
        
        if (result == 0)
            return result
        
        int32_t i_1 = arg3
        
        if (i_1 u> 0)
            void* ecx_4 = edi_1 - result
            int32_t i
            
            do
                int32_t* esi_3 = ecx_4 + result
                *result = *esi_3
                void* edi_4 = &result[1]
                void* esi_4 = &esi_3[1]
                *edi_4 = *esi_4
                result = &result[3]
                i = i_1
                i_1 -= 1
                *(edi_4 + 4) = *(esi_4 + 4)
            while (i != 1)
        
        *arg4 = ebx_1
        j__free(var_8_1)
        var_8_1 = arg2
else
    int32_t* eax_3 = sub_745f3f(arg2 * 0xc)
    
    if (eax_3 == 0)
        var_8_1 = nullptr
    else
        sub_61cdd0(eax_3, 0xc, arg2, sub_52e900)
        var_8_1 = eax_3
    
    *arg4 = arg2

*arg1 = var_8_1
return 1
