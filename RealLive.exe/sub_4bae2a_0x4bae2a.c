// 函数: sub_4bae2a
// 地址: 0x4bae2a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int16_t entry_ebx
entry_ebx:1.b = ror.b(entry_ebx:1.b, 1)
bool c = unimplemented  {ror bh, 0x1}
arg1.b = sbb.b(arg1.b, 0x8a, c)
bool p = unimplemented  {sbb al, 0x8a}
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg3)
*(arg1 + arg2 + 0x16354c8f) = temp0

if (not(p))
    *0x11cfbc71 = arg1
    undefined

arg1:1.b += __return_addr.w:1.b
int32_t edx
edx:1.b = 0xca
int16_t eax
void* edx_1
eax, edx_1 = 0xcf1b5dbe()
*(edx_1 - 0x49) += eax:1.b
undefined
