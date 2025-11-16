// 函数: sub_730990
// 地址: 0x730990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg1
int32_t* result = arg3
int32_t i = 0
void** edi = *result

if (*(ecx + 0x11c) s> 0)
    result = arg2 - edi
    arg2 = result
    
    do
        char* edx_1 = *(result + edi)
        void* eax_1 = *edi
        void* esi_2 = *(ecx + 0x5c) + eax_1
        
        if (eax_1 u< esi_2)
            do
                ecx.b = *edx_1
                edx_1 = &edx_1[1]
                *eax_1 = ecx.b
                *(eax_1 + 1) = ecx.b
                eax_1 += 2
            while (eax_1 u< esi_2)
            
            ecx = arg1
        
        result = arg2
        i += 1
        edi = &edi[1]
    while (i s< *(ecx + 0x11c))

return result
