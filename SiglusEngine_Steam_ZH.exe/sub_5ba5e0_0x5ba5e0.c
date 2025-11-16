// 函数: sub_5ba5e0
// 地址: 0x5ba5e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5bf800(arg1 + 0x210)
sub_5bff20(arg1 + 0x4dc)
sub_6096a0(arg1 + 0x614)
sub_5ba670(arg1 + 0xa0)
sub_5ba930(arg1 + 0x158)
sub_5baa20(arg1 + 0x4dc)
sub_5bac90(arg1 + 0x614)
*(arg1 + 0x864) = 0
bool cond:0 = *(arg1 + 0x6fc) u< 8
*(arg1 + 0x6f8) = 0

if (cond:0)
    *(arg1 + 0x6e8) = 0
    return 0

int16_t* result = *(arg1 + 0x6e8)
*result = 0
return result
