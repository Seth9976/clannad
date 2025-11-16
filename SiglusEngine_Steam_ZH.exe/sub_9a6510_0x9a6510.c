// 函数: sub_9a6510
// 地址: 0x9a6510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = *arg2
int32_t ecx = edx[2]
int32_t ebx = edx[3]
int32_t temp0 = divs.dp.d(sx.q(edx[1] - *edx), ecx)
int32_t* result = sub_99cca0(arg3, 4)
int32_t esi_1 = temp0 << 2
char* eax_5 = sub_99cca0(arg3, esi_1)
*result = eax_5
_memset(eax_5, 0, esi_1)
int32_t edi_1 = arg5
int32_t var_1c = 0
int32_t eax_9 = divs.dp.d(sx.q(*edx), edi_1)
arg5 = eax_9

if (temp0 s> 0)
    int32_t ecx_6
    
    do
        int32_t ecx_4 = 0
        int32_t ebx_3 = 0
        int32_t esi_2 = 0
        int32_t var_c_1 = 0
        
        if (ecx s> 0)
            int32_t edx_6 = *arg4
            int32_t var_24_1 = edx_6
            
            do
                int32_t eax_11
                int32_t edx_7
                edx_7:eax_11 = sx.q(*(edx_6 + (eax_9 << 2)))
                int32_t eax_13 = (eax_11 ^ edx_7) - edx_7
                
                if (eax_13 s> esi_2)
                    esi_2 = eax_13
                
                int32_t esi_3 = 1
                
                if (edi_1 s> 1)
                    do
                        int32_t eax_17
                        int32_t edx_8
                        edx_8:eax_17 = sx.q(*(arg4[esi_3] + (arg5 << 2)))
                        int32_t eax_19 = (eax_17 ^ edx_8) - edx_8
                        
                        if (eax_19 s> ecx_4)
                            ecx_4 = eax_19
                        
                        esi_3 += 1
                    while (esi_3 s< edi_1)
                    
                    ebx_3 = var_c_1
                
                ebx_3 += edi_1
                eax_9 = arg5 + 1
                edx_6 = var_24_1
                arg5 = eax_9
                var_c_1 = ebx_3
            while (ebx_3 s< ecx)
        
        int32_t edx_9 = 0
        
        if (ebx - 1 s> 0)
            void* eax_22 = &edx[0x286]
            
            while (esi_2 s> *(eax_22 - 0x100) || ecx_4 s> *eax_22)
                edx_9 += 1
                eax_22 += 4
                
                if (edx_9 s>= ebx - 1)
                    break
        
        *(*result + (var_1c << 2)) = edx_9
        ecx_6 = var_1c + 1
        eax_9 = arg5
        var_1c = ecx_6
    while (ecx_6 s< temp0)

arg2[0xa] += 1
return result
