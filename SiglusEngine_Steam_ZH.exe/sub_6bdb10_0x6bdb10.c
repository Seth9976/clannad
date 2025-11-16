// 函数: sub_6bdb10
// 地址: 0x6bdb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
int32_t var_8_1 = 0
void* esi

if (*arg4 != 0)
    char* esi_1 = arg4
    
    do
        arg1 = *esi_1
        esi_1 = &esi_1[1]
    while (arg1 != 0)
    
    esi = esi_1 - &esi_1[1]
else
    esi = nullptr

sub_607ff0(arg3, sub_6b3720(arg2, arg4, esi))
return arg3
