// 函数: sub_6ffa90
// 地址: 0x6ffa90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
void** eax = sub_669720(&data_4ebe4a8, edi)
void** ecx = data_4ebe4a8

if (eax == ecx)
    arg1 = ecx
else
    void* eax_1 = &eax[4]
    int32_t ecx_1 = *(eax_1 + 0x10)
    
    if (eax[9] u>= 8)
        eax_1 = *eax_1
    
    int32_t var_10_1 = ecx_1
    int32_t eax_2 = sub_536340(edi, ecx_1, *(edi + 0x10), eax_1)
    ecx = data_4ebe4a8
    arg1 = eax
    
    if (eax_2 s< 0)
        arg1 = ecx

if (arg1 == ecx)
    return 0

return arg1[0xa]
