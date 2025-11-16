// 函数: sub_656990
// 地址: 0x656990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* ebx_1 = arg4 - arg3

if (arg4 == arg3)
    return 

int32_t* ecx = arg1[1]

if (arg1[2] - ecx u< ebx_1)
    int32_t edx_1 = *arg1
    
    if (edx_1 - ecx - 1 u< ebx_1)
        sub_743191("vector<T> too long")
        noreturn
    
    uint32_t eax_6 = sub_597900(arg1, ecx - edx_1 + ebx_1)
    int32_t* ecx_4 = nullptr
    arg4 = nullptr
    
    if (eax_6 != 0)
        if (eax_6 u<= 0xffffffff)
            int32_t* eax_7 = sub_745f3f(eax_6)
            ecx_4 = eax_7
            arg4 = eax_7
        
        if (eax_6 u> 0xffffffff || ecx_4 == 0)
            sub_743132()
            noreturn
    
    int32_t* eax_8 = *arg1
    void* esi_1 = arg2 - eax_8
    _memcpy(_memcpy(_memcpy(ecx_4, eax_8, esi_1) + esi_1, arg3, ebx_1) + ebx_1, arg2, 
        arg1[1] - arg2)
    int32_t ecx_6 = *arg1
    void* ebx_2 = ebx_1 + arg1[1] - ecx_6
    
    if (ecx_6 != 0)
        j__free(ecx_6)
    
    *arg1 = arg4
    arg1[2] = eax_6 + arg4
    arg1[1] = arg4 + ebx_2
    return 

_memcpy(ecx, arg3, ebx_1)
int32_t edx_4 = arg1[1]
int32_t eax = edx_4 + ebx_1

if (arg2 != edx_4 && edx_4 != eax)
    sub_656bd0(eax, edx_4, arg2, eax)

arg1[1] += ebx_1
