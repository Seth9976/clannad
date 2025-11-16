// 函数: sub_5970d0
// 地址: 0x5970d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1

if (arg1 != arg2)
    int32_t* edx_1 = *arg2
    int32_t eax_1 = arg2[1]
    
    if (edx_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    int32_t* ecx = *arg1
    void* esi_2 = arg1[1] - ecx
    void* edi_2 = eax_1 - edx_1
    
    if (edi_2 u<= esi_2)
        _memcpy(ecx, edx_1, eax_1 - edx_1)
        arg1[1] = arg2[1] - *arg2 + *arg1
        return arg1
    
    if (edi_2 u<= arg1[2] - ecx)
        int32_t* edi_4 = esi_2 + edx_1
        _memcpy(ecx, edx_1, edi_4 - edx_1)
        void* esi_5 = arg2[1] - edi_4
        arg1[1] = _memcpy(arg1[1], edi_4, esi_5) + esi_5
        return arg1
    
    if (ecx != 0)
        j__free(ecx)
    
    if (sub_597460(arg1, arg2[1] - *arg2) != 0)
        int32_t* eax_19 = *arg2
        void* esi_7 = arg2[1] - eax_19
        arg1[1] = _memcpy(*arg1, eax_19, esi_7) + esi_7

return arg1
