// 函数: sub_668e40
// 地址: 0x668e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
int32_t* ebx = arg1
void** eax
int32_t* ecx
eax, ecx = sub_669720(arg1, edi)

if (eax != *ebx)
    void* eax_1 = &eax[4]
    int32_t ecx_1 = *(eax_1 + 0x10)
    
    if (eax[9] u>= 8)
        eax_1 = *eax_1
    
    int32_t var_14_1 = ecx_1
    int32_t eax_2
    eax_2, ecx = sub_536340(edi, ecx_1, *(edi + 0x10), eax_1)
    
    if (eax_2 s>= 0)
        return &eax[0xa]

int32_t* var_14_2 = ecx
arg2 = edi
void** var_18_2 = &arg2
int32_t* eax_4 = sub_66af50(ecx)
sub_66b010(ebx, &arg2, eax, &eax_4[4], eax_4)
return arg2 + 0x28
