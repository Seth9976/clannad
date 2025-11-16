// 函数: sub_66ff20
// 地址: 0x66ff20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t* edi = arg1
void** eax
int32_t** ecx
eax, ecx = sub_6700c0(arg1, ebx)

if (eax != *edi)
    char eax_2
    eax_2, ecx = sub_670200(ebx, &eax[4])
    
    if (eax_2 == 0)
        return &eax[0xa]

int32_t** var_14_2 = ecx
arg2 = ebx
int32_t** var_18_2 = &arg2
int32_t* eax_4 = sub_66f8e0(ecx)
sub_66fcf0(edi, &arg2, eax, &eax_4[4], eax_4)
return &arg2[0xa]
