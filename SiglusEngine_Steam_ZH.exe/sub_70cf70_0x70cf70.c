// 函数: sub_70cf70
// 地址: 0x70cf70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ebx = arg2
int32_t ecx = *(ebx + 0x10)

if (ecx u< arg3)
    sub_7431bf("invalid string position")
    noreturn

void* edi = arg4
void* ecx_1 = ecx - arg3

if (ecx_1 u< edi)
    edi = ecx_1

void* ecx_2 = arg1[4]

if (0xffffffff - ecx_2 u<= edi)
    sub_743191("string too long")
    noreturn

if (edi != 0)
    char* eax_2 = ecx_2 + edi
    
    if (sub_541df0(arg1, eax_2, 0) != 0)
        int32_t eax_4 = arg1[5]
        int32_t* edx_1
        
        if (eax_4 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* eax_5
        
        if (eax_4 u< 0x10)
            eax_5 = arg1
        else
            eax_5 = *arg1
        
        void* ecx_4 = arg1[4]
        
        if (ecx_4 != 0)
            _memcpy(eax_5 + edi, edx_1, ecx_4)
        
        if (arg1 != ebx)
            if (*(ebx + 0x14) u>= 0x10)
                ebx = *ebx
            
            int32_t* ecx_7
            
            if (arg1[5] u< 0x10)
                ecx_7 = arg1
            else
                ecx_7 = *arg1
            
            if (edi != 0)
                sub_748840(ecx_7, arg3 + ebx, edi)
        else
            void* eax_7 = arg3
            
            if (eax_7 != 0)
                eax_7 += edi
            
            int32_t ecx_5 = arg1[5]
            int32_t* edx_2
            
            if (ecx_5 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
            
            int32_t* ecx_6
            
            if (ecx_5 u< 0x10)
                ecx_6 = arg1
            else
                ecx_6 = *arg1
            
            if (edi != 0)
                _memcpy(ecx_6, eax_7 + edx_2, edi)
        
        sub_541fc0(arg1, eax_2)

return arg1
