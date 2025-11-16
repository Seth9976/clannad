// 函数: sub_56b4c0
// 地址: 0x56b4c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1

if (arg1 != arg2)
    int32_t eax_1 = arg2[1]
    int32_t* edi_1 = *arg2
    
    if (edi_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    int32_t* ecx = *arg1
    int32_t edx_3 = (eax_1 - edi_1) s>> 2
    int32_t esi_3 = (arg1[1] - ecx) s>> 2
    
    if (edx_3 u<= esi_3)
        _memcpy(ecx, edi_1, (eax_1 - edi_1) & 0xfffffffc)
        arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 2 << 2)
        return arg1
    
    if (edx_3 u<= (arg1[2] - ecx) s>> 2)
        int32_t* edx_4 = *arg2
        int32_t* edi_2 = &edi_1[esi_3]
        _memcpy(ecx, edx_4, (edi_2 - edx_4) & 0xfffffffc)
        arg1[1] = &_memcpy(arg1[1], edi_2, (arg2[1] - edi_2) s>> 2 << 2)[(arg2[1] - edi_2) s>> 2]
        return arg1
    
    if (ecx != 0)
        j__free(ecx)
    
    if (sub_536100(arg1, (arg2[1] - *arg2) s>> 2) != 0)
        int32_t* ecx_5 = *arg2
        arg1[1] = &_memcpy(*arg1, ecx_5, (arg2[1] - ecx_5) s>> 2 << 2)[(arg2[1] - ecx_5) s>> 2]

return arg1
