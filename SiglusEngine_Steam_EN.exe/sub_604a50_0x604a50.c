// 函数: sub_604a50
// 地址: 0x604a50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_20f34c0 == 0)
    return sub_604adf() __tailcall

int32_t eax_2 = arg1 & 0x7f80
bool cond:0 = eax_2 != 0x1f80

if (eax_2 == 0x1f80)
    int16_t x87status_2
    int16_t temp0_1
    temp0_1, x87status_2 = __fnstcw_memmem16(arg2)
    eax_2.w = temp0_1
    eax_2.w &= 0x7f
    cond:0 = eax_2.w != 0x7f

if (cond:0)
    return sub_604adf() __tailcall

return sub_605088() __tailcall
