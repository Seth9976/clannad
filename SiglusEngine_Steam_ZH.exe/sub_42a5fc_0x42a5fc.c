// 函数: sub_42a5fc
// 地址: 0x42a5fc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (arg2 != 0)
    int32_t eax_1 = arg1[1]
    
    if (eax_1 != 0)
        int32_t result = sub_458ce7(eax_1 + 1, arg2)
        
        if (result s< 0)
            return result
        
        int32_t* eax_3 = *arg2
        char* eax_5 = (*(*eax_3 + 0xc))(eax_3) + arg1[1]
        *eax_5 = 0
        int32_t* i = *arg1
        
        if (i != 0)
            void* ebx
            void* var_10_3 = ebx
            
            do
                char* ecx_1 = &i[1]
                
                do
                    ebx.b = *ecx_1
                    ecx_1 = &ecx_1[1]
                while (ebx.b != 0)
                
                void* ecx_2 = ecx_1 - &ecx_1[1]
                eax_5 -= ecx_2
                int32_t esi_2
                int32_t edi_4
                edi_4, esi_2 = __builtin_memcpy(eax_5, &i[1], ecx_2 u>> 2 << 2)
                __builtin_memcpy(edi_4, esi_2, ecx_2 & 3)
                i = *i
            while (i != 0)
    else
        *arg2 &= eax_1

return 0
