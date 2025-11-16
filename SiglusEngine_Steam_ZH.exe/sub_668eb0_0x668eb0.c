// 函数: sub_668eb0
// 地址: 0x668eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg3
int32_t* edi = arg1
void** eax = sub_669720(arg1, ebx)

if (eax != *edi)
    void* eax_1 = &eax[4]
    int32_t ecx = *(eax_1 + 0x10)
    
    if (eax[9] u>= 8)
        eax_1 = *eax_1
    
    int32_t var_14_1 = ecx
    
    if (sub_536340(ebx, ecx, *(ebx + 0x10), eax_1) s>= 0)
        *arg2 = eax
        return arg2

*arg2 = *edi
return arg2
