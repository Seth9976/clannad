// 函数: __ftol3_except
// 地址: 0x74c19d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg3)
uint32_t eax = zx.d(temp0)

if (arg2 != 8 && (*(arg2 + &data_aad248:7) & eax.b) != 0)
    return 

int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(0x133f)
int16_t var_20
var_20.d = arg2
int64_t var_10_1 = arg4
uint32_t var_8_1 = eax
__except1(var_20, 0, arg4.d)
