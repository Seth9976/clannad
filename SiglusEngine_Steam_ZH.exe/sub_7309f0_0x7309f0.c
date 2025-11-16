// 函数: sub_7309f0
// 地址: 0x7309f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg3
int32_t* ecx = *result
arg3 = ecx

if (*(arg1 + 0x11c) s> 0)
    result = arg2
    int32_t i = 0
    
    do
        char* edx_1 = *result
        char* eax = ecx[i]
        void* esi_2 = *(arg1 + 0x5c) + eax
        
        if (eax u< esi_2)
            do
                ecx.b = *edx_1
                edx_1 = &edx_1[1]
                *eax = ecx.b
                eax[1] = ecx.b
                eax = &eax[2]
            while (eax u< esi_2)
            
            ecx = arg3
        
        sub_748840(ecx[i + 1], ecx[i], *(arg1 + 0x5c))
        i += 2
        ecx = arg3
        result = &arg2[1]
        arg2 = result
    while (i s< *(arg1 + 0x11c))

return result
