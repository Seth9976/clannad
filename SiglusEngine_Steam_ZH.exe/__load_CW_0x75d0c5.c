// 函数: __load_CW
// 地址: 0x75d0c5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1:2.w = (arg1.w & 0x300) | 0x7f
int16_t x87control
int16_t x87status
x87control, x87status = __fldcw_memmem16(arg1:2.w)
