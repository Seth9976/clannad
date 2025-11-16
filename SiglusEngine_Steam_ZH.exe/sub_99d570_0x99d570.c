// 函数: sub_99d570
// 地址: 0x99d570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t eax = arg2
int32_t edi = 0
int32_t var_14 = eax

if (esi != 0)
    eax = esi

int32_t* result = _malloc(eax << 2)
char var_98
_memset(&var_98, 0, 0x84)
void* ebx = nullptr
int32_t edx_1

if (var_14 s<= 0)
label_99d677:
    
    for (int32_t i = 1; i s< 0x21; i += 1)
        if ((*(&var_98 + (i << 2)) & 0xffffffff u>> (0x20 - i.b)) != 0)
            goto label_99d703
    
    edx_1 = var_14
else
    int32_t eax_2 = arg3
    
    do
        int32_t i_4 = sx.d(*(ebx + eax_2))
        
        if (i_4 s> 0)
            int32_t esi_1 = *(&var_98 + (i_4 << 2))
            
            if (i_4 s< 0x20 && esi_1 u>> i_4.b != 0)
            label_99d703:
                _free(result)
                return 0
            
            result[edi] = esi_1
            edi += 1
            int32_t i_1 = i_4
            
            do
                int32_t ecx_3 = *(&var_98 + (i_1 << 2))
                
                if ((ecx_3.b & 1) != 0)
                    if (i_1 != 1)
                        void* ecx_5 = &(&var_98)[i_1 << 2]
                        *ecx_5 = *(ecx_5 - 4) * 2
                    else
                        int32_t var_94 = var_94 + 1
                    
                    break
                
                *(&var_98 + (i_1 << 2)) = ecx_3 + 1
                i_1 -= 1
            while (i_1 s> 0)
            
            for (int32_t i_2 = i_4 + 1; i_2 s< 0x21; i_2 += 1)
                int32_t edx = *(&var_98 + (i_2 << 2))
                
                if (edx u>> 1 != esi_1)
                    break
                
                esi_1 = edx
                int32_t __saved_ebx
                *(&var_98 + (i_2 << 2)) = (&__saved_ebx)[i_2] * 2
            
            esi = arg4
            eax_2 = arg3
        else if (esi == 0)
            edi += 1
        
        edx_1 = var_14
        ebx += 1
    while (ebx s< edx_1)
    
    int32_t var_90
    
    if (edi != 1 || var_90 != 2)
        goto label_99d677

char* edi_1 = nullptr

if (edx_1 s> 0)
    int32_t* result_1 = result
    
    do
        int32_t eax_13 = 0
        edx_1.b = edi_1[arg3]
        int32_t i_3 = 0
        
        if (edx_1.b s> 0)
            do
                uint32_t edx_3 = *result_1 u>> i_3.b
                i_3 += 1
                eax_13 = (eax_13 * 2) | (edx_3 & 1)
            while (i_3 s< sx.d(edx_1.b))
            
            edx_1.b = edx_1.b
        
        if (arg4 == 0 || edx_1.b != 0)
            *result_1 = eax_13
            result_1 = &result_1[1]
        
        edi_1 = &edi_1[1]
    while (edi_1 s< var_14)

return result
