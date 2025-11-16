// 函数: sub_407370
// 地址: 0x407370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3
int32_t eax = esi

if (esi == 0)
    eax = arg2

int32_t* edx = _malloc(eax << 2)
int32_t* var_8c = edx
void var_84
__builtin_memset(&var_84, 0, 0x84)
int32_t var_90 = 0

if (arg2 s> 0)
    int32_t* edi_1 = edx
    int32_t* var_88 = arg1
    
    while (true)
        int32_t i_2 = *var_88
        
        if (i_2 s> 0)
            int32_t esi_1 = *(&var_84 + (i_2 << 2))
            int32_t __saved_edi
            void* eax_3 = &(&__saved_edi)[i_2 + 7]
            
            if (i_2 s< 0x20 && esi_1 u>> i_2.b != 0)
                _free(var_8c)
                return 0
            
            *edi_1 = esi_1
            edi_1 = &edi_1[1]
            int32_t i = i_2
            
            do
                int32_t ebx_1 = *eax_3
                
                if ((ebx_1.b & 1) != 0)
                    if (i != 1)
                        (&__saved_edi)[i + 7] = (&var_88)[i] << 1
                    else
                        int32_t var_80 = var_80 + 1
                    
                    break
                
                i -= 1
                *eax_3 = ebx_1 + 1
                eax_3 -= 4
            while (i s> 0)
            
            int32_t i_1 = i_2 + 1
            
            if (i_1 s< 0x21)
                void* eax_5 = &(&__saved_edi)[i_1 + 7]
                
                do
                    int32_t edx_6 = *eax_5
                    
                    if (edx_6 u>> 1 != esi_1)
                        break
                    
                    esi_1 = edx_6
                    *eax_5 = *(eax_5 - 4) << 1
                    i_1 += 1
                    eax_5 += 4
                while (i_1 s< 0x21)
        else if (esi == 0)
            edi_1 = &edi_1[1]
        
        bool cond:2_1 = var_90 + 1 s< arg2
        var_90 += 1
        var_88 = &var_88[1]
        
        if (not(cond:2_1))
            break
        
        esi = arg3
    
    edx = var_8c
    
    if (arg2 s> 0)
        int32_t* ebx_5 = arg1
        int32_t* edi_2 = edx
        int32_t var_90_1 = arg2
        bool cond:3_1
        
        do
            int32_t edx_11 = *ebx_5
            int32_t eax_8 = 0
            int32_t ecx_2 = 0
            
            if (edx_11 s> 0)
                do
                    eax_8 = (eax_8 * 2) | (*edi_2 u>> ecx_2.b & 1)
                    ecx_2 += 1
                while (ecx_2 s< edx_11)
            
            if (arg3 == 0 || edx_11 != 0)
                *edi_2 = eax_8
                edi_2 = &edi_2[1]
            
            ebx_5 = &ebx_5[1]
            cond:3_1 = var_90_1 != 1
            var_90_1 -= 1
        while (cond:3_1)
        return var_8c

return edx
