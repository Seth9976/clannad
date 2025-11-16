// 函数: ___report_gsfailure
// 地址: 0x10003268
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

BOOL eax
int32_t ecx
int32_t edx
eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
bool p = unimplemented  {test eax, eax}
bool a = undefined
bool z = eax == 0

if (not(z))
    trap(0xd)

data_1001a7f0 = eax
data_1001a7ec = ecx
data_1001a7e8 = edx
int32_t entry_ebx
data_1001a7e4 = entry_ebx
int32_t entry_esi
data_1001a7e0 = entry_esi
int32_t entry_edi
data_1001a7dc = entry_edi
int16_t ss
data_1001a808 = ss
int16_t cs
data_1001a7fc = cs
int16_t ds
data_1001a7d8 = ds
int16_t es
data_1001a7d4 = es
int16_t fs
data_1001a7d0 = fs
int16_t gs
data_1001a7cc = gs
bool d
data_1001a800 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2
int32_t entry_ebp
data_1001a7f4 = entry_ebp
data_1001a7f8 = __return_addr
data_1001a804 = &stack_cookie
data_1001a740 = 0x10001
data_1001a6fc = data_1001a7f8
data_1001a6f0 = 0xc0000409
data_1001a6f4 = 1
data_1001a700 = 1
int32_t var_32c_1 = 4
data_1001a704 = 2
int32_t var_32c_2 = 4
uint32_t __security_cookie_1 = __security_cookie
(&__security_cookie_1)[1] = data_10017004
___raise_securityfailure(&data_100101d0)
noreturn
