// 函数: sub_53005f
// 地址: 0x53005f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

j__free(arg1[-0x10])
arg1[-0xb] = 7
arg1[-0xc] = 0
arg1[-0x10].w = 0
sub_6c26c0(arg2)
HWND result
result.b = 1
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-3]
sub_745f2b(arg1[-4] ^ arg1)
*arg1
return result
