// 函数: sub_606400
// 地址: 0x606400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg1
int32_t* var_20
int32_t* esi = &var_20
void* eax = *(arg1 + 8)
var_20 = nullptr
char* eax_1

if (eax u> 8)
    void* var_24_1 = eax
    int32_t* eax_2 = sub_7431ed()
    var_20 = eax_2
    esi = eax_2
    eax_1 = *arg1
else
    eax_1 = arg1

int32_t* eax_3
int32_t edx
eax_3, edx = sub_748840(esi, eax_1, eax)
sub_6066f0(eax_3, edx, &var_8, arg3, arg4, var_20)
char* eax_4 = var_8

if (eax_4 == arg4)
    *arg2 = arg4
    arg2[1] = arg4
    return arg2

char* esi_1 = eax_4

if (*(arg1 + 0xc) != 0)
    char** ecx_3 = arg2
    ecx_3[1] = &eax_4[1]
    *ecx_3 = eax_4
    return ecx_3

do
    if (sub_6067a0(arg1, *esi_1) == 0)
        break
    
    esi_1 = &esi_1[1]
while (esi_1 != arg4)

*arg2 = var_8
arg2[1] = esi_1
return arg2
