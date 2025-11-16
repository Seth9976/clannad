// 函数: sub_9ae050
// 地址: 0x9ae050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_4ecd220 == 0)
    return sub_9ae0df() __tailcall

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
    return sub_9ae0df() __tailcall

return sub_9af498() __tailcall
