// 函数: sub_5cc770
// 地址: 0x5cc770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = sub_5c50e0()

if (result == 0)
    return result

int32_t eax = *result
result[1] = arg1
sub_5c5430(&result[2], (*(eax + 8))(result))
int32_t dwNewLong = result[5]
SetWindowLongW(arg1, 0xfffffffc, dwNewLong)
return dwNewLong(arg1, arg2, arg3, arg4)
