// 函数: sub_4e6e10
// 地址: 0x4e6e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
DeleteObject(data_1c04448)
sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
data_1b8ad60.o = zx.o(0)
sub_4d6c40(&data_1bfdd20, &data_1332b54)
int32_t esi = data_1c051c4
int32_t edi = data_1c051c8
uint32_t eax_2 = timeGetTime()
data_1c051b4 = 0
data_1c051b0 = 0

if (eax_2 == 0)
    eax_2 = 1

data_1c051ac = 0
data_1c051b8 = eax_2
int16_t var_80 = 0x9c
int32_t var_38 = edi
int32_t var_34 = esi
int32_t var_7c = 0x180000
void var_a4
sub_4d53f0(sub_4d1ba0(eax_2, 0x9c, &var_a4, 0), esi, edi, nullptr, 0)
BOOL result = WINNLSEnableIME(nullptr, 1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
