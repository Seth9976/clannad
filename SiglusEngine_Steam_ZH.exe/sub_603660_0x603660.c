// 函数: sub_603660
// 地址: 0x603660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6de670(arg1, 1)
void** eax = &arg1[0x4d]
arg1[0x4a] = 0xffffffff
arg1[0x4b] = 0xffffffff
arg1[0x4c] = 0xffffffff
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
arg1[0x53] = 0xffffffff
int32_t result = arg1[0x54]
arg1[0x55] = result
return result
