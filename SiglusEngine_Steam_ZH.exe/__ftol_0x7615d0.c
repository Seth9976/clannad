// 函数: __ftol
// 地址: 0x7615d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
int16_t eax
eax:1.b = temp0:1.b | 0xc
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(eax)
int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(temp0)
return int.q(arg2).d
