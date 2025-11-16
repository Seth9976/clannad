// 函数: sub_6a40f0
// 地址: 0x6a40f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_14 = arg3
sub_571710(arg3, *(arg1 + 4), &arg3[0x20], arg3)
void* edi = *(arg1 + 4)

for (void* i = edi - 0x80; i != edi; i -= 0xffffff80)
    sub_5719b0(i)

*(arg1 + 4) -= 0x80
*arg2 = arg3
return arg2
