// 函数: sub_651340
// 地址: 0x651340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ebx = arg2
int32_t* edi = arg1
void** eax
int32_t* ecx
eax, ecx = sub_5d48a0(arg1, ebx)

if (eax != *edi)
    char eax_1
    eax_1, ecx = sub_5cd6f0(ebx, &eax[4])
    
    if (eax_1 == 0)
        return &eax[8]

int32_t* var_14_1 = ecx
arg2 = ebx
int16_t** var_18 = &arg2
int32_t* eax_3 = sub_651a10(ecx)
sub_651a60(edi, &arg2, eax, &eax_3[4], eax_3)
return &arg2[0x10]
