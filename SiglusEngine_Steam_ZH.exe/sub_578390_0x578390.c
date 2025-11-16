// 函数: sub_578390
// 地址: 0x578390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg2
void** edi = *arg1
void** esi = edi
void** eax = edi[1]

while (*(eax + 0xd) == 0)
    if (eax[4] u>= *ecx)
        esi = eax
        eax = *eax
    else
        eax = eax[2]

if (esi != edi && *ecx u>= esi[4])
    return &esi[5]

int32_t* var_14 = ecx
arg2 = ecx
int32_t** var_18 = &arg2
int32_t* eax_3 = sub_5797a0(ecx)
sub_5797f0(arg1, &arg2, esi, &eax_3[4], eax_3)
return &arg2[5]
