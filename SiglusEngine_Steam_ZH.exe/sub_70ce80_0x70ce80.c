// 函数: sub_70ce80
// 地址: 0x70ce80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
char* result = arg3
int32_t var_8_1 = 0
void* esi

if (*arg2 != 0)
    void* esi_1 = arg2
    arg3 = esi_1 + 1
    
    do
        arg1 = *esi_1
        esi_1 += 1
    while (arg1 != 0)
    
    esi = esi_1 - arg3
else
    esi = nullptr

void* var_14 = esi
sub_607ff0(result, sub_70d080(arg4, arg3, arg2))
return result
