// 函数: sub_728a70
// 地址: 0x728a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = *arg1
int32_t esi = arg1[3]
arg1[1] = 0
_memset(arg1, 0, 0x1c8)
*arg1 = edi
arg1[3] = esi
arg1[4].b = 1
sub_72d5a0(arg1)
arg1[2] = 0
arg1[6] = 0
__builtin_memset(&arg1[0x24], 0, 0x30)
arg1[0x45] = 0
sub_72bab0(arg1)
int32_t (** result)(int32_t* arg1) = (*arg1[1])(arg1, 0, 0x18)
arg1[0x6a] = result
*result = sub_72c7b0
result[1] = sub_72c8b0
result[2] = sub_72c740
result[3] = sub_72c790
result[4].w = 0
result[5] = 1
arg1[5] = 0xc8
return result
