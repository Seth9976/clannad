// 函数: sub_656ab0
// 地址: 0x656ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg3
void* ebx_1 = arg4 - eax

if (arg4 != eax)
    int32_t* edx_1 = arg1[1]
    
    if (arg1[2] - edx_1 u< ebx_1)
        int32_t ecx_2 = *arg1
        
        if (ecx_2 - edx_1 - 1 u< ebx_1)
            sub_743191("vector<T> too long")
            noreturn
        
        uint32_t eax_4 = sub_597900(arg1, edx_1 - ecx_2 + ebx_1)
        int32_t* ecx_4 = nullptr
        int32_t* var_8 = nullptr
        
        if (eax_4 != 0)
            if (eax_4 u<= 0xffffffff)
                int32_t* eax_5 = sub_745f3f(eax_4)
                ecx_4 = eax_5
                var_8 = eax_5
            
            if (eax_4 u> 0xffffffff || ecx_4 == 0)
                sub_743132()
                noreturn
        
        int32_t* eax_6 = *arg1
        void* esi_1 = arg2 - eax_6
        void* esi_3 = arg4 - arg3
        _memcpy(_memcpy(_memcpy(ecx_4, eax_6, esi_1) + esi_1, arg3, esi_3) + esi_3, arg2, 
            arg1[1] - arg2)
        int32_t ecx_7 = *arg1
        void* ebx_2 = ebx_1 + arg1[1] - ecx_7
        
        if (ecx_7 != 0)
            j__free(ecx_7)
        
        *arg1 = var_8
        arg1[2] = eax_4 + var_8
        void* eax_15 = var_8 + ebx_2
        arg1[1] = eax_15
        return eax_15
    
    _memcpy(edx_1, eax, ebx_1)
    void* edx_6 = arg1[1]
    char* ecx_9 = arg2
    eax = edx_6 + ebx_1
    
    if (ecx_9 != edx_6 && edx_6 != eax)
        eax = sub_656bd0(eax, edx_6, ecx_9, eax)
    
    arg1[1] += ebx_1

return eax
