// 函数: ___report_gsfailure
// 地址: 0x5f0734
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL eax
int32_t ecx
int32_t edx
eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
bool p = unimplemented  {test eax, eax}
bool a = undefined
bool z = eax == 0

if (not(z))
    trap(0xd)

data_640d88 = eax
data_640d84 = ecx
data_640d80 = edx
int32_t entry_ebx
data_640d7c = entry_ebx
int32_t entry_esi
data_640d78 = entry_esi
int32_t entry_edi
data_640d74 = entry_edi
int16_t ss
data_640da0 = ss
int16_t cs
data_640d94 = cs
int16_t ds
data_640d70 = ds
int16_t es
data_640d6c = es
int16_t fs
data_640d68 = fs
int16_t gs
data_640d64 = gs
bool d
data_640d98 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2
int32_t entry_ebp
data_640d8c = entry_ebp
data_640d90 = __return_addr
data_640d9c = &stack_cookie
data_640cd8 = 0x10001
data_640c94 = data_640d90
data_640c88 = 0xc0000409
data_640c8c = 1
data_640c98 = 1
int32_t var_32c_1 = 4
data_640c9c = 2
int32_t var_32c_2 = 4
uint32_t __security_cookie_1 = __security_cookie
(&__security_cookie_1)[1] = data_63ba9c
___raise_securityfailure(&data_6067b4)
noreturn
