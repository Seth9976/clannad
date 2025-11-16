// 函数: sub_6880f0
// 地址: 0x6880f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
void** eax = sub_688230(edi)
void** eax_1 = data_4ebe324

if (eax != eax_1)
    void* eax_2 = &eax[4]
    int32_t ecx_1 = *(eax_2 + 0x10)
    
    if (eax[9] u>= 8)
        eax_2 = *eax_2
    
    int32_t var_10_1 = ecx_1
    
    if (sub_536340(edi, ecx_1, *(edi + 0x10), eax_2) s>= 0)
        *arg1 = eax
        return arg1
    
    eax_1 = data_4ebe324

*arg1 = eax_1
return arg1
