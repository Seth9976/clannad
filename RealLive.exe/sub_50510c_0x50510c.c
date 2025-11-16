// 函数: sub_50510c
// 地址: 0x50510c
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int16_t ds
uint32_t var_4 = zx.d(ds)
*(arg6 + (arg4 << 3) + 0x55) = fconvert.s(arg7)
int32_t eflags
int32_t eax_1 = __in_oeax_immb(0xca, eflags)
int16_t ss
uint32_t var_8 = zx.d(ss)
int32_t var_c = eax_1
char* ebx_1
ebx_1.b = arg1.b + arg1:1.b
long double x87_r0 = arg7 + fconvert.t(*(arg2 + 0x1f))
int32_t eflags_1
char temp0_1
char temp1
temp0_1, temp1, eflags_1 = __aam_immb(0x1e, eax_1.b)
eax_1.b = temp0_1
eax_1:1.b = temp1
*0x1d841c4f = arg5
ebx_1:1.b s>>= 1
int16_t ds_1 = *0x1d841c4f
int32_t esp
esp.w = eax_1.w
eax_1.w = 0x1c51
*(arg6 - 1 + (eax_1 << 3) + 0x52) = fconvert.s(x87_r0)
int32_t eax_2 = __in_oeax_immb(0xca, eflags_1)
int32_t eflags_2
int32_t eip
eip, eflags_2 = __into(eflags_1)
*(esp - 4) = eax_2
char temp1_1 = *ebx_1
*ebx_1 += arg2.b
bool c = temp1_1 + arg2.b u< temp1_1
bool p = unimplemented  {add byte [ebx], dl}
bool a = unimplemented  {add byte [ebx], dl}
bool d
*(esp - 8) = (add_overflow(temp1_1, arg2.b) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (temp1_1 + arg2.b s< 0 ? 1 : 0) << 7 | (temp1_1 == neg.b(arg2.b) ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
long double x87_r0_1 = fconvert.t(*arg2) - x87_r0
eax_2:1.b = sbb.b(eax_2:1.b, arg2.b, c)
*0x1d83244f = zx.d(ds_1)
char temp0_2 = arg3:1.b
arg3:1.b = eax_2.b
eax_2.b = temp0_2
*0x1d83244f
*0x1d83244d = zx.d(ds_1)
int32_t esp_2 = *0x1d83244d
*(ebx_1 + 0x50) = fconvert.s(x87_r0_1)
int32_t eax_4 = __in_oeax_immb(0xca, eflags_2)
*(arg6 - 3)
char* edi_3 = arg6 + 1
*(esp_2 - 4) = eax_4
*edi_3 += eax_4.b
*(arg3 - 0x4ee279ab)
trap(0x92)
