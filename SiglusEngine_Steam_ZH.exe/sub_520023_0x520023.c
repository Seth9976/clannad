// 函数: sub_520023
// 地址: 0x520023
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 - *arg5
char* result
result.b = arg4.b + arg3:1.b
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aam_immb(0x66, result.b)
result.b = temp0
result:1.b = temp1
result.b &= *result
return result
