// 函数: sub_734010
// 地址: 0x734010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_4 = ((arg2 << 1) + 0x18) s>> 1
int32_t esi = *(arg3 + 0x70)
int32_t var_41c = arg2
int32_t var_428 = esi
int32_t edi = 0x7fffffff
int32_t var_414 = 0
int32_t var_408[0x100]

if (esi s> 0)
    int32_t* eax_11 = *(arg3 + 0x74)
    char* ebx_2 = eax_11[1]
    void* ecx_1 = *eax_11 - ebx_2
    void* eax_13 = eax_11[2] - ebx_2
    void* var_424_1 = ecx_1
    int32_t ecx_23
    
    do
        uint32_t eax_14 = zx.d(*(ecx_1 + ebx_2))
        int32_t eax_15
        int32_t esi_4
        
        if (eax_14 s< arg2)
            int32_t esi_3 = (eax_14 - arg2) * 2
            esi_4 = esi_3 * esi_3
            eax_15 = eax_14 - (arg2 + 0x18)
        else if (eax_14 s<= arg2 + 0x18)
            esi_4 = 0
            
            if (eax_14 s> eax_4)
                eax_15 = eax_14 - arg2
            else
                eax_15 = eax_14 - (arg2 + 0x18)
        else
            int32_t esi_7 = (eax_14 - (arg2 + 0x18)) * 2
            esi_4 = esi_7 * esi_7
            eax_15 = eax_14 - arg2
        
        uint32_t edx = zx.d(*ebx_2)
        int32_t eax_16 = eax_15 * 2
        int32_t edx_1
        
        if (edx s< arg4)
            int32_t ecx_6 = (edx - arg4) * 3
            esi_4 += ecx_6 * ecx_6
            edx_1 = edx - (arg4 + 0x1c)
        else if (edx s> arg4 + 0x1c)
            int32_t ecx_10 = (edx - (arg4 + 0x1c)) * 3
            esi_4 += ecx_10 * ecx_10
            edx_1 = edx - arg4
        else if (edx s> (arg4 * 2 + 0x1c) s>> 1)
            edx_1 = edx - arg4
        else
            edx_1 = edx - (arg4 + 0x1c)
        
        int32_t ecx_12 = edx_1 * 3
        uint32_t edx_2 = zx.d(*(eax_13 + ebx_2))
        int32_t edx_3
        
        if (edx_2 s< arg5)
            int32_t ecx_17 = edx_2 - arg5
            esi_4 += ecx_17 * ecx_17
            edx_3 = edx_2 - (arg5 + 0x18)
        else if (edx_2 s> arg5 + 0x18)
            int32_t ecx_20 = edx_2 - (arg5 + 0x18)
            esi_4 += ecx_20 * ecx_20
            edx_3 = edx_2 - arg5
        else if (edx_2 s> (arg5 * 2 + 0x18) s>> 1)
            edx_3 = edx_2 - arg5
        else
            edx_3 = edx_2 - (arg5 + 0x18)
        
        var_408[var_414] = esi_4
        esi = var_428
        int32_t eax_19 = eax_16 * eax_16 + ecx_12 * ecx_12 + edx_3 * edx_3
        arg2 = var_41c
        
        if (eax_19 s< edi)
            edi = eax_19
        
        ecx_23 = var_414 + 1
        ebx_2 = &ebx_2[1]
        var_414 = ecx_23
        ecx_1 = var_424_1
    while (ecx_23 s< esi)

int32_t result = 0
int32_t ecx_24 = 0

if (esi s> 0)
    do
        if (var_408[ecx_24] s<= edi)
            arg6[result] = ecx_24.b
            result += 1
        
        ecx_24 += 1
    while (ecx_24 s< esi)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
