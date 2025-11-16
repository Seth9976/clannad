// 函数: sub_6ce1f0
// 地址: 0x6ce1f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0 || arg2 == 0 || arg4 == 0 || arg9 == 0 || (arg8 s> 0 && arg10 == 0))
    return 

char* ecx_1 = arg4

do
    arg1.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (arg1.b != 0)

void* eax = ecx_1 - &ecx_1[1] + 1
void* var_8_1 = eax

if (arg7 u> 3)
    sub_6d42e0(arg3, "Invalid pCAL equation type")
    noreturn

if (arg8 u> 0xff)
    sub_6d42e0(arg3, "Invalid pCAL parameter count")
    noreturn

int32_t esi_2 = 0

if (arg8 s> 0)
    do
        char* ecx_3 = *(arg10 + (esi_2 << 2))
        int32_t eax_3
        
        if (ecx_3 != 0)
            char* edx_1 = ecx_3
            void* eax_2
            
            do
                eax_2.b = *edx_1
                edx_1 = &edx_1[1]
            while (eax_2.b != 0)
            eax_3 = sub_6cd400(ecx_3, edx_1 - &edx_1[1])
        
        if (ecx_3 == 0 || eax_3 == 0)
            sub_6d42e0(arg3, "Invalid format for pCAL parameter")
            noreturn
        
        esi_2 += 1
    while (esi_2 s< arg8)
    
    eax = var_8_1

int32_t* eax_4 = sub_6d8360(arg3, eax)
*(arg2 + 0xd0) = eax_4

if (eax_4 != 0)
    sub_748840(eax_4, arg4, var_8_1)
    char* ecx_6 = arg9
    *(arg2 + 0xd4) = arg5
    *(arg2 + 0xd8) = arg6
    void* edx_4 = &ecx_6[1]
    *(arg2 + 0xe4) = arg7.b
    *(arg2 + 0xe5) = arg8.b
    char i
    
    do
        i = *ecx_6
        ecx_6 = &ecx_6[1]
    while (i != 0)
    int32_t* eax_8 = sub_6d8360(arg3, ecx_6 - edx_4 + 1)
    *(arg2 + 0xdc) = eax_8
    
    if (eax_8 == 0)
        sub_6d4470(arg3, "Insufficient memory for pCAL units")
        return 
    
    sub_748840(eax_8, arg9, ecx_6 - edx_4 + 1)
    char* eax_11 = sub_6d8360(arg3, (arg8 << 2) + 4)
    *(arg2 + 0xe0) = eax_11
    
    if (eax_11 == 0)
        sub_6d4470(arg3, "Insufficient memory for pCAL params")
        return 
    
    _memset(eax_11, 0, (arg8 << 2) + 4)
    int32_t esi_5 = 0
    
    if (arg8 s> 0)
        do
            char* eax_15 = *(arg10 + (esi_5 << 2))
            void* edx_7 = &eax_15[1]
            char i_1
            
            do
                i_1 = *eax_15
                eax_15 = &eax_15[1]
            while (i_1 != 0)
            int32_t* eax_17 = sub_6d8360(arg3, eax_15 - edx_7 + 1)
            *(*(arg2 + 0xe0) + (esi_5 << 2)) = eax_17
            
            if (eax_17 == 0)
                sub_6d4470(arg3, "Insufficient memory for pCAL parameter")
                return 
            
            sub_748840(eax_17, *(arg10 + (esi_5 << 2)), eax_15 - edx_7 + 1)
            esi_5 += 1
        while (esi_5 s< arg8)
    
    *(arg2 + 8) |= 0x400
    *(arg2 + 0xe8) |= 0x80
    return 

sub_6d4470(arg3, "Insufficient memory for pCAL purpose")
