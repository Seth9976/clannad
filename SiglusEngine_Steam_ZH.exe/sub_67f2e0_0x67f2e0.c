// 函数: sub_67f2e0
// 地址: 0x67f2e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg3
int32_t ebx = arg4
int32_t result_1 = 0
int32_t eax = i << 2
void** edi = arg5
int32_t* esi_1 = *(arg1 + 0x1c) + eax
int32_t i_1 = i
int32_t var_14 = 0xffffffff

do
    void* eax_2 = *esi_1
    int32_t ecx = 0
    
    if (edi s> 0)
        int32_t* edx = eax_2 + 0x20
        
        do
            if (*edx != *(ebx + (ecx << 2)))
                goto label_67f35f
            
            ecx += 1
            edx = &edx[1]
        while (ecx s< edi)
        
        eax_2 = *esi_1
        i = arg3
    
    int32_t eax_3 = *(eax_2 + (edi << 2) + 0x20)
    
    if (eax_3 != var_14 || edi == 4)
        result_1 += 1
        var_14 = eax_3
    
    i += 1
    esi_1 = &esi_1[1]
    arg3 = i
while (i != (*(arg1 + 0x20) - *(arg1 + 0x1c)) s>> 2)

label_67f35f:
int32_t result = result_1

if (result s> 0)
    sub_67f4c0(&arg2[1], result)
    arg4 = 0
    int32_t ecx_5 = 0xffffffff
    void** edx_1 = nullptr
    *arg2 = *(eax + *(arg1 + 0x1c))
    void* esi_3 = arg1
    arg3 = 0xffffffff
    arg5 = nullptr
    
    do
        void* esi_5 = *(*(esi_3 + 0x1c) + (i_1 << 2))
        result = 0
        
        if (edi s> 0)
            int32_t* edx_2 = esi_5 + 0x20
            
            do
                if (*edx_2 != *(ebx + (result << 2)))
                    return result
                
                result += 1
                edx_2 = &edx_2[1]
            while (result s< edi)
            
            ecx_5 = arg3
            edx_1 = arg5
        
        int32_t eax_10 = *(esi_5 + (edi << 2) + 0x20)
        
        if (eax_10 != ecx_5 || edi == 4)
            if (ecx_5 != 0xffffffff)
                arg4 += 1
            
            ecx_5 = eax_10
            arg3 = ecx_5
            
            if (edi + 1 s< 5)
                *(ebx + (edi << 2)) = ecx_5
                sub_67f2e0(arg2[1] + edx_1, i_1, ebx, edi + 1)
                ecx_5 = arg3
                edx_1 = arg5
            
            *(edx_1 + arg2[1]) = esi_5
            edx_1 = &edx_1[4]
            arg5 = edx_1
        
        i_1 += 1
        *(esi_5 + (edi << 2) + 0x38) = arg4
        esi_3 = arg1
        result = (*(esi_3 + 0x20) - *(esi_3 + 0x1c)) s>> 2
    while (i_1 != result)

return result
