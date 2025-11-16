// 函数: sub_72c8b0
// 地址: 0x72c8b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t (** eax)(int32_t* arg1) = arg1[0x6a]
*eax = sub_72c7b0
eax[4].w = 0
eax[5] = 1
(*(*arg1 + 0x10))(arg1)
int32_t result = (*arg1[0x6b])(arg1)
arg1[0x23] = 0
return result
