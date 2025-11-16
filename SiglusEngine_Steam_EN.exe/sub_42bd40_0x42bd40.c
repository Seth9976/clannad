// 函数: sub_42bd40
// 地址: 0x42bd40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1[1]

if (esi != 0xffffffff && esi u<= 0x1ff)
    *(esi * 0x74 + &data_13747ac) -= 1
    
    if (*(esi * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi * 0x74 + 0x13747b0, esi * 0x74 + 0x13747b4)
        sub_425320(esi)

sub_42e670(&arg1[4])
sub_42da30(&arg1[4])
*arg1 = 0
arg1[1] = 0xffffffff
return sub_42d9c0(&arg1[4]) __tailcall
