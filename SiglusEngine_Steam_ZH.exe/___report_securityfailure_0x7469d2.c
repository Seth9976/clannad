// 函数: ___report_securityfailure
// 地址: 0x7469d2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL eax
int32_t ecx
int32_t edx
eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
bool p = unimplemented  {test eax, eax}
bool a = undefined
bool z = eax == 0

if (not(z))
    trap(0xd)

data_b94cc8 = eax
data_b94cc4 = ecx
data_b94cc0 = edx
int32_t entry_ebx
data_b94cbc = entry_ebx
data_b94cb8 = arg2
data_b94cb4 = arg3
int16_t ss
data_b94ce0 = ss
int16_t cs
data_b94cd4 = cs
int16_t ds
data_b94cb0 = ds
int16_t es
data_b94cac = es
int16_t fs
data_b94ca8 = fs
int16_t gs
data_b94ca4 = gs
bool d
data_b94cd8 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2
data_b94ccc = arg1
data_b94cd0 = __return_addr
int32_t arg_4
data_b94cdc = &arg_4
data_b94bd4 = data_b94cd0
data_b94bc8 = 0xc0000409
data_b94bcc = 1
data_b94bd8 = 1
int32_t var_324_1 = 4
data_b94bdc = arg_4
___raise_securityfailure(&data_aacff4)
noreturn
