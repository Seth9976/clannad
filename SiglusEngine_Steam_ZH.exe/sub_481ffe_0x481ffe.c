// 函数: sub_481ffe
// 地址: 0x481ffe
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t** esi = *arg2
int32_t edi
int32_t var_18 = edi
void* ecx = *(arg1 + 8)
*(arg1 + 0x10) = esi

if (ecx != 0)
    return sub_4829e3(ecx, arg2, arg3, arg4, arg5)

int32_t* ebx_1 = arg3
void* ecx_1 = *ebx_1
void* eax_4 = *(*(arg1 + 4) + 8) + ecx_1

if (eax_4 u<= *arg4)
    int32_t edx_3 = *(*(arg1 + 4) + 4)
    
    if (edx_3 u> 8)
        result = 0x88760388
    label_4821b1:
        *arg2 = &esi[1]
        *ebx_1 += *(*(arg1 + 4) + 8)
        return result
    
    switch (edx_3)
        case 0, 6
            double* eax_8 = _realloc(*arg5, eax_4)
            
            if (eax_8 != 0)
                *arg5 = eax_8
                double** ecx_6
                ecx_6.w = *esi
                *(eax_8 + *ebx_1) = ecx_6.w
                *esi = ecx_6.w
                goto label_4821b1
        case 1, 7
            double* eax_6 = _realloc(*arg5, eax_4)
            
            if (eax_6 != 0)
                *arg5 = eax_6
                *(eax_6 + *ebx_1) = *esi
                goto label_4821b1
        case 2
            double* eax_12 = _realloc(*arg5, eax_4)
            
            if (eax_12 != 0)
                *arg5 = eax_12
                *(eax_12 + *ebx_1) = fconvert.s(fconvert.t(*esi))
                goto label_4821b1
        case 3
            double* eax_14 = _realloc(*arg5, eax_4)
            
            if (eax_14 != 0)
                *arg5 = eax_14
                *(eax_14 + *ebx_1) = fconvert.d(fconvert.t(*esi))
                *arg2 = &esi[1]
                *ebx_1 += *(*(arg1 + 4) + 8)
                *arg4 += 4
                return result
        case 4, 5
            double* eax_10 = _realloc(*arg5, eax_4)
            
            if (eax_10 != 0)
                *arg5 = eax_10
                double** ecx_8
                ecx_8.b = *esi
                *(eax_10 + *ebx_1) = ecx_8.b
                *esi = ecx_8.b
                goto label_4821b1
        case 8
            int32_t* eax_19 = *esi
            arg3 = eax_19
            
            if (eax_19 == 0)
                return 0x80004005
            
            void* esi_2 = eax_19 + 1
            
            do
                edx_3.b = *eax_19
                eax_19 += 1
            while (edx_3.b != 0)
            
            double* eax_21 = _realloc(*arg5, ecx_1 + eax_19 - esi_2 + 1)
            
            if (eax_21 != 0)
                *arg5 = eax_21
                int32_t esi_5
                int32_t edi_5
                edi_5, esi_5 =
                    __builtin_memcpy(*ebx_1 + eax_21, arg3, (eax_19 - esi_2 + 1) u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_5, (eax_19 - esi_2 + 1) & 3)
                *arg2 = &esi[1]
                *ebx_1 += eax_19 - esi_2 + 1
                *arg4 += eax_19 - esi_2 - 3
                return result

return 0x8007000e
