// 函数: sub_464e40
// 地址: 0x464e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_1c = arg3
*arg2 = 0xffffffff
int32_t result = sub_41fa10(arg3, 0)

if (result != 0xffffffff)
    int32_t var_8
    
    if (sub_41fbc0(result, arg2) != 0 && sub_41fbc0(result, &var_8) != 0)
        int32_t* eax_5 = *(*(result * 0x64 + data_13570f8 + 0x60) + (var_8 << 2))
        sub_4cfd70(arg4, *eax_5 + eax_5)
        sub_4cfd70(arg5, arg3)
        sub_4cfd70(arg6, arg4)
        return result
    
    result = 0xffffffff

sub_4cfd70(arg6, arg3)
return result
