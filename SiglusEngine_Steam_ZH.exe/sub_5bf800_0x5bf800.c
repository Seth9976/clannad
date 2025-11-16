// 函数: sub_5bf800
// 地址: 0x5bf800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** eax = arg1 + 0x12c
int32_t ebx = *(arg1 + 0x120)
int32_t edi = *(arg1 + 0x124)
int32_t ecx = *(arg1 + 0x128)
*(arg1 + 0x120) = 0xffffffff
*(arg1 + 0x124) = 0xffffffff
bool cond:0 = eax[5] u< 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void* eax_1 = arg1 + 0x144
bool cond:1 = *(eax_1 + 0x14) u< 8
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

*eax_1 = 0
*(arg1 + 0x2c8) = 1

if (ebx s< 0 || edi s< 0)
    *(arg1 + 0x2c8) = 0
    return eax_1

if (ecx == 0xffffffff)
    ecx = 0

sub_5b80f0(arg1 + 0x214, ecx)
int32_t* eax_2 = sub_5bfcf0(arg1, ebx, edi)
*(arg1 + 0x2c8) = 0
return eax_2
