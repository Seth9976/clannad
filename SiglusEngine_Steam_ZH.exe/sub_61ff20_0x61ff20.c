// 函数: sub_61ff20
// 地址: 0x61ff20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg3
int16_t* result = arg3
int32_t var_8_1 = 0
void* eax

if (*arg4 != 0)
    int16_t* eax_1 = arg4
    
    do
        arg3.w = *eax_1
        eax_1 = &eax_1[1]
    while (arg3.w != 0)
    
    eax = (eax_1 - &eax_1[1]) s>> 1
else
    eax = nullptr

sub_532a20(result, sub_532910(arg2, arg4, eax))
return result
